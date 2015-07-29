#include <iostream>
#include "Sort.h"
#include "SortHelper.h"

int main(){
	//FSort Sorter;
	std::vector<int16_t> intVector = SortHelper::GenerateRandomArray();
	//Sorter.BubbleSort(intVector);
	//Sorter.ShellSort(intVector, Sorter.SEQUENCE_CIURA);
	//SortHelper::PrintVector(intVector);
	SortHelper::CompareMethods(intVector);
	return 0;
}