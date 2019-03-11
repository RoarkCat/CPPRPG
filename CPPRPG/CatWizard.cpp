#include "CatWizard.h"

CatWizard::CatWizard()
{
	setName("Meowster");
	setDescription("Amiable feline friend.");
	setLifeResource(150);
	setSkillResource(100);

	setPlayerSkills("Lightning Bolt", "A devastating (but adorable) shock.", 50);
	setPlayerSkills("Purr", "It's how you know he likes you.", 25);

	setPartySlot(0);
	setLevel(3);
	setCurrentExperience(50);

	printCharacterDetails();
	printPlayerSkills();
};
