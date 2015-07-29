#pragma once
#include <iostream>
#include <vector>
#include <cstdint>


class FSort{
	

public:
	FSort();
	enum ShellSortGapSequence { SEQUENCE_CIURA };
	//Insertion sort of vector<int16_t>
	void InsertionSort(std::vector<int16_t> &sortable);
	//Selection sort of vector<int16_t>
	void SelectionSort(std::vector<int16_t> &sortable);
	//Bubble sort of vector<int16_t>
	void BubbleSort(std::vector<int16_t> &sortable);
	//Shellsort of vector<int16_t>
	void ShellSort(std::vector<int16_t> &sortable, ShellSortGapSequence sequence);

private:
	std::vector<int16_t> GenerateGapSequence(ShellSortGapSequence sequence);
};