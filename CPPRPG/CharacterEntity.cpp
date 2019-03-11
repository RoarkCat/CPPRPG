#include "CharacterEntity.h"

CharacterEntity::CharacterEntity()
{
	name = "Generic-o Name-o";
	description = "Placeholder description. Set one!";
	life_resource = 100;
	skill_resource = 100;
}

int32 CharacterEntity::getLifeResource() const { return life_resource; }
int32 CharacterEntity::getSkillResource() const { return skill_resource; }

FString CharacterEntity::getName() const { return name; }
FString CharacterEntity::getDescription() const { return description; }

void CharacterEntity::setLifeResource(int32 resource)
{
	life_resource = resource;
	return;
}

void CharacterEntity::setSkillResource(int32 resource) 
{
	skill_resource = resource;
	return;
}

void CharacterEntity::setName(FString new_name)
{
	name = new_name;
	return;
}

void CharacterEntity::setDescription(FString new_description)
{
	description = new_description;
	return;
}

void CharacterEntity::printCharacterDetails()
{
	std::cout << "Character details:\n";
	std::cout << "\tName: " << name << std::endl;
	std::cout << "\tDescription: " << description << std::endl;
	std::cout << "\tHealth: " << life_resource << std::endl;
	std::cout << "\tMana: " << skill_resource << std::endl;
}
