#include "SortHelper.h"

namespace SortHelper{
	std::vector<int16_t> GenerateRandomArray(){
		std::vector<int16_t> randomIntegers;
		srand(time(NULL));
		for (int i = 0; i < Globals::RAND_ARRAY_LENGTH; i++){
			int16_t rInt = rand() % Globals::RAND_VALUE_MAX_LIMIT;
			randomIntegers.push_back(rInt);
		}
		return randomIntegers;
	}
}