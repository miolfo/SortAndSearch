#pragma once
#include <iostream>
#include <vector>
#include <cstdint>

class FSort{
private:

public:
	FSort();
	//Insertion sort of vector<int16_t>
	std::vector<int16_t> InsertionSort(std::vector<int16_t> sortable);
	//Selection sort of vector<int16_t>
	std::vector<int16_t> SelectionSort(std::vector<int16_t> sortable);
};