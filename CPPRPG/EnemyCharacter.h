#pragma once
#include "CharacterEntity.h"

class EnemyCharacter : public CharacterEntity {
public:
	EnemyCharacter(); // constructor
	void constructEnemyDynamics();

	int32 getMinLevel() const;
	int32 getMaxLevel() const;
	int32 getDamagePerAttack() const;
	int32 getLevel() const;

	int32 damage_multiplier = 2;

	void setMinLevel(int32);
	void setMaxLevel(int32);
	int32 setDamagePerAttack(); // calculated by levels
	int32 setLevel(); // random between max and min

private:
	void constructEnemyDefaults();

	int32 min_level;
	int32 max_level;
	int32 chosen_level;

	int32 damage_per_attack;
};