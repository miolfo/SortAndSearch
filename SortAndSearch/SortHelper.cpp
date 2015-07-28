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

	std::vector<int16_t> GenerateSortedArray(){
		std::vector<int16_t> sortedArray;
		for (int i = 0; i < Globals::RAND_ARRAY_LENGTH; i++){
			sortedArray.push_back(i);
		}
		return sortedArray;
	}

	std::vector<int16_t> GenerateReversedArray(){
		std::vector<int16_t> reversedArray;
		for (int i = Globals::RAND_ARRAY_LENGTH; i > 0; i--){
			reversedArray.push_back(i);
		}
		return reversedArray;
	}
	
	std::vector<int16_t> GenerateAlmostSortedArray(){
		std::vector<int16_t> almostSortedArray = GenerateSortedArray();
		srand(time(NULL));
		int16_t temp;
		for (int i = 1; i < almostSortedArray.size()-1; i++){
			int16_t randVal = rand() % 100;
			if (randVal < Globals::ALMOST_SORTED_ARR_SWAP_P){
				int b_or_f = rand() % 100;
				if (b_or_f > 50){
					temp = almostSortedArray.at(i);
					almostSortedArray.at(i) = almostSortedArray.at(i + 1);
					almostSortedArray.at(i + 1) = temp;
				}
				else{
					temp = almostSortedArray.at(i);
					almostSortedArray.at(i) = almostSortedArray.at(i - 1);
					almostSortedArray.at(i - 1) = temp;
				}
			}
		}
		return almostSortedArray;
	}

	void PrintVector(std::vector<int16_t> vect){
		std::cout << std::endl;
		for (int i = 0; i < vect.size(); i++){
			std::cout << vect.at(i) << ", ";
		}
		std::cout << std::endl;
	}
}