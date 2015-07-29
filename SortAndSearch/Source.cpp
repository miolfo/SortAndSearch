#include <iostream>
#include "Sort.h"
#include "SortHelper.h"
#include "SortingAlgorithm.h"
#include "InsertionSorter.h"

int main(){
	//FSort Sorter;
	std::vector<int16_t> intVector = SortHelper::GenerateRandomArray();
	//Sorter.BubbleSort(intVector);
	//Sorter.ShellSort(intVector, Sorter.SEQUENCE_CIURA);
	//SortHelper::PrintVector(intVector);
	//SortHelper::CompareMethods(intVector);
	//SortingAlgorithm asd("kek", "sellanen setti");
	//asd.PrintInfo();
	InsertionSorter asd;
	asd.Sort(intVector);
	SortHelper::PrintVector(intVector);
	return 0;
}