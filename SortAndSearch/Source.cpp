#include <iostream>
#include "Sort.h"
#include "SortHelper.h"

int main(){
	FSort Sorter;
	std::vector<int16_t> randomIntegers = SortHelper::GenerateRandomArray();
	std::vector<int16_t> sortedIntegers = Sorter.BubbleSort(randomIntegers);
	SortHelper::PrintVector(SortHelper::GenerateAlmostSortedArray());
	return 0;
}