#include "CatWizard.h"
#include "DogKnight.h"

int main() {
	CatWizard* kitty = new CatWizard();
	DogKnight* puppy = new DogKnight();

	std::cout << std::endl;

	// Simulate battle example
	FString hero_name = kitty->getName();
	FString foe_name = puppy->getName();

	std::cout << hero_name << " health: " << kitty->getLifeResource() << std::endl << foe_name << " health: " << puppy->getLifeResource() << std::endl;
	std::cout << foe_name << " attacks! Deals " << puppy->getDamagePerAttack() << " damage!" << std::endl;
	kitty->setLifeResource(kitty->getLifeResource() - puppy->getDamagePerAttack());
	std::cout << hero_name << " has " << kitty->getLifeResource() << " HP left." << std::endl;
	std::cout << hero_name << " attacks with " << kitty->getPlayerSkills().begin()->first << "! It deals " << kitty->getPlayerSkills().begin()->second.skill_damage << " damage." << std::endl;
	puppy->setLifeResource(puppy->getLifeResource() - kitty->getPlayerSkills().begin()->second.skill_damage);
	std::cout << foe_name << " has " << puppy->getLifeResource() << " HP left." << std::endl;
}