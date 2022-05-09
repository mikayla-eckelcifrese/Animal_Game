#pragma once
#include <bitset>

const static enum class Traits
{
	Furry, CommonPet, CanSwim, LivesUnderwater, CanRun, CanFly, Loyal, Arrogant, Mammal, Reptile, LivesOnLand,
	NumTraits
};

const static auto numTraits = (int)Traits::NumTraits;

struct Animal
{
	std::bitset<numTraits> Traits;

	explicit Animal(std::bitset<numTraits> traits) ://Animal objects will be binary numbers where the nth digit corresponds to
													//the animal has the nth trait in the above enum
		Traits{ traits }//member initializer list 
	{
	}
};
const Animal Dog{ 0b11101010101 };
const Animal Cat{ 0b11101001101 };
const Animal Bird{ 0b01001100000 };
const Animal Fish{ 0b01110000000 };
const Animal hark{ 0b00110000000 };
const Animal Frog{ 0b01100000011 };
const Animal Lizard{ 0b01101000011 };
const Animal Snake{ 0b01100001011 };











