#include <iostream>
#include "Sort.h"
#include "SortHelper.h"

int main(){
	FSort Sorter;
	std::vector<int16_t> intArray = SortHelper::GenerateRandomArray();
	Sorter.ShellSort(intArray, Sorter.SEQUENCE_CIURA);
	SortHelper::PrintVector(intArray);
	return 0;
}