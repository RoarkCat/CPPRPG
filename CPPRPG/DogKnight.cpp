#include "DogKnight.h"

DogKnight::DogKnight()
{
	setName("Barkster");
	setDescription("Crafty canine foe.");
	setLifeResource(200);
	setSkillResource(50);

	setMinLevel(3);
	setMaxLevel(7);
	constructEnemyDynamics();

	printCharacterDetails();
}
