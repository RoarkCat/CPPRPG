#pragma once
#include <string>
#include <map>
#include <iostream>
#define TMap std::map

// unrealify
using FString = std::string;
using int32 = int;

// Main class to create anything considered a 'character.' Includes both enemies and allies.
class CharacterEntity {
public:
	CharacterEntity(); // constructor

	// getters
	int32 getLifeResource() const;
	int32 getSkillResource() const;

	FString getName() const;
	FString getDescription() const;

	void setLifeResource(int32);
	void setSkillResource(int32);

	void setName(FString);
	void setDescription(FString);

	void printCharacterDetails();

private:
	int32 life_resource;
	int32 skill_resource;

	FString name;
	FString description;
};