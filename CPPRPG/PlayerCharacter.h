#pragma once
#include "CharacterEntity.h"

struct SkillData {
	FString skill_description;
	int32 skill_damage;
};

using SkillMap = TMap<FString, SkillData>; // <SkillName, SkillDataStruct>


class PlayerCharacter : public CharacterEntity {
public:
	PlayerCharacter(); // constructor

	SkillMap getPlayerSkills() const;
	int32 getPartySlot() const;
	int32 getLevel() const;
	int32 getCurrentExperience() const;

	void setPartySlot(int32);
	void setLevel(int32);
	void setCurrentExperience(int32);

	void increaseExperience(int32);

	void setPlayerSkills(FString, FString, int32);
	void printPlayerSkills();

private:
	SkillMap hero_abilities;

	int32 party_slot;
	int32 level;
	int32 experience;
};