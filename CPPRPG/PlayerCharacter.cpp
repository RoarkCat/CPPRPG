#include "PlayerCharacter.h"

PlayerCharacter::PlayerCharacter()
{
	// default player char values
	party_slot = 0;
	level = 1;
	experience = 0;
}

SkillMap PlayerCharacter::getPlayerSkills() const {	return hero_abilities; }

int32 PlayerCharacter::getPartySlot() const { return party_slot; }
int32 PlayerCharacter::getLevel() const { return level; }
int32 PlayerCharacter::getCurrentExperience() const { return experience; }

void PlayerCharacter::setPartySlot(int32 new_party_slot) 
{
	party_slot = new_party_slot;
	return;
}

void PlayerCharacter::setLevel(int32 new_level)
{
	level = new_level;
	return;
}

void PlayerCharacter::setCurrentExperience(int32 new_experience)
{
	experience = new_experience;
	return;
}

void PlayerCharacter::increaseExperience(int32 experience_amount)
{
	experience += experience_amount;
	return;
}

void PlayerCharacter::setPlayerSkills(FString skill_name, FString skill_desc, int32 skill_dmg)
{
	SkillData skill_construct;
	skill_construct.skill_description = skill_desc;
	skill_construct.skill_damage = skill_dmg;
	hero_abilities[skill_name] = skill_construct;
	return;
}

void PlayerCharacter::printPlayerSkills()
{
	for (auto& sname : hero_abilities) {
		std::cout << sname.first << std::endl;
		std::cout << sname.second.skill_description << std::endl;
		std::cout << sname.second.skill_damage << std::endl;
	}
}
