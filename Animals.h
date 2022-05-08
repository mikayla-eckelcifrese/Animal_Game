#pragma once
#include <bitset>

class Animal
{
	public:
	static enum class Traits
	{
		Furry, CommonPet, CanSwim, LivesUnderwater, CanRun, CanFly, Loyal, Arrogant, Mammal,
		NumTraits
	};

	const static int NumTraits = (int)Traits::NumTraits;

	std::bitset<(int)Traits::NumTraits> Traits;

	explicit Animal(std::bitset< NumTraits > traits) :
		Traits{ traits }//member initializer list 
	{}

};
