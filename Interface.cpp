#include <string>
#include <array>
#include <iostream>
#include <memory>
#include "Animals.h"

using std::string;

const static int numTraits = (int)Animal::Traits::NumTraits;

const static std::array<string, numTraits> TraitsList = { "Furry", "CommonPet", "CanSwim", "LivesUnderwater",
															"CanRun", "CanFly", "Loyal", "Arrogant", "Mammal" };

class TraitType//base class defining basic 
{
	string m_Trait;

	public:
	TraitType(string Trait) : m_Trait{ Trait }
	{
	}

	string Trait() const
	{
		return m_Trait;
	}

	virtual string Question() const = 0;
};

class Adjectives : public TraitType
{
	string Question() const override
	{
		return "Is it " + Trait() + "?";
	}
};

class Verbs : public TraitType
{
	string Question() const override
	{
		return "Can it " + Trait() + "?";
	}
};

class Nouns : public TraitType
{
	string Question() const override
	{
		return "Is it a " + Trait() + "?";
	}
};



int main()
{

}


