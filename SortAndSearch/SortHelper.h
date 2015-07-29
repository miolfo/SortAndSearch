#pragma once
#include "Common.h"

/**Helper functions used for sorting */
namespace SortHelper{
	//Generate a vector<int16_t> with 512 elements of random numbers
	std::vector<int16_t> GenerateRandomArray();
	std::vector<int16_t> GenerateSortedArray();
	std::vector<int16_t> GenerateReversedArray();
	std::vector<int16_t> GenerateAlmostSortedArray();
	void PrintVector(std::vector<int16_t> vect);
	void CompareMethods(std::vector<int16_t> vect);
}