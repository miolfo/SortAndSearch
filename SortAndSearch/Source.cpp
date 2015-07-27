#include <iostream>
#include "Sort.h"
#include "SortHelper.h"

int main(){
	FSort Sorter;
	std::vector<int16_t> randomIntegers = SortHelper::GenerateRandomArray();
	std::vector<int16_t> sortedIntegers = Sorter.SelectionSort(randomIntegers);
	for (int i = 0; i < sortedIntegers.size(); i++){
		std::cout << sortedIntegers.at(i) << std::endl;
	}
	return 0;
}