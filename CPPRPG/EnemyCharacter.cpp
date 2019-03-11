#include "EnemyCharacter.h"
#include <random>

EnemyCharacter::EnemyCharacter()
{
	constructEnemyDefaults();
}

// For first time initialization.
void EnemyCharacter::constructEnemyDefaults()
{
	min_level = 1;
	max_level = 3;

	constructEnemyDynamics();
}

// Used after setting new min and max levels.
void EnemyCharacter::constructEnemyDynamics()
{
	chosen_level = setLevel();
	damage_per_attack = setDamagePerAttack();
}

int32 EnemyCharacter::getMinLevel() const {	return min_level; }
int32 EnemyCharacter::getMaxLevel() const {	return max_level; }
int32 EnemyCharacter::getDamagePerAttack() const { return damage_per_attack; }
int32 EnemyCharacter::getLevel() const { return chosen_level; }

void EnemyCharacter::setMinLevel(int32 lvl)
{
	min_level = lvl;
	return;
}

void EnemyCharacter::setMaxLevel(int32 lvl)
{
	max_level = lvl;
	return;
}

int32 EnemyCharacter::setDamagePerAttack()
{
	damage_per_attack = chosen_level * damage_multiplier;
	return damage_per_attack;
}

int32 EnemyCharacter::setLevel()
{
	std::random_device random_d;
	std::mt19937 rand_generator(random_d());
	std::uniform_int_distribution<> distribution(min_level, max_level);

	chosen_level = distribution(rand_generator);

	return chosen_level;
}
