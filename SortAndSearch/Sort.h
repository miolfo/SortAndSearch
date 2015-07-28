#pragma once
#include <iostream>
#include <vector>
#include <cstdint>


class FSort{
	

public:
	FSort();
	enum ShellSortGapSequence { SEQUENCE_CIURA };
	//Insertion sort of vector<int16_t>
	std::vector<int16_t> InsertionSort(std::vector<int16_t> sortable);
	//Selection sort of vector<int16_t>
	std::vector<int16_t> SelectionSort(std::vector<int16_t> sortable);
	//Bubble sort of vector<int16_t>
	std::vector<int16_t> BubbleSort(std::vector<int16_t> sortable);
	//Shellsort of vector<int16_t>
	std::vector<int16_t> ShellSort(std::vector<int16_t> sortable, ShellSortGapSequence sequence);

private:
	std::vector<int16_t> GenerateGapSequence(ShellSortGapSequence sequence);
};