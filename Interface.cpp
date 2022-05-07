#include <string>
#include <array>
#include <iostream>
#include "Animals.h"

const static std::array<std::string, Animal::NumTraits> TraitsList = { "Furry", "CommonPet", "CanSwim", "LivesUnderwater",
															"CanRun", "CanFly", "Loyal", "Arrogant", "Mammal" };
Animal Dog{0b111010101};
Animal Cat{ 0b111010011 };
Animal Bird{ 0b010011000 };
Animal Fish{ 0b011100000 };
Animal Shark{ 0b001100000 };

void PrintQuestions()
{
	int index = 0;

	for (int i : TraitsList[index])
	{
		std::cout << i << TraitsList[i] << "\n";
	}
}

int main()
{
	
}