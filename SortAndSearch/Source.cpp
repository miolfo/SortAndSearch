#include <iostream>
#include "Sort.h"
#include "SortHelper.h"

int main(){
	FSort Sorter;
	std::vector<int16_t> intArray = SortHelper::GenerateRandomArray();
	Sorter.BubbleSort(intArray);
	SortHelper::PrintVector(intArray);
	return 0;
}