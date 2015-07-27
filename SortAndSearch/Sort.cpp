#include "Sort.h"

FSort::FSort(){
	std::cout << "Initialized FSort" << std::endl;
}

std::vector<int16_t> FSort::InsertionSort(std::vector<int16_t> sortable){
	std::vector<int16_t> sortedVector = sortable;
	int16_t temp, j;
	for (int i = 1; i < sortedVector.size(); i++){
		j = i;
		while (j > 0 && sortedVector.at(j) < sortedVector.at(j - 1)){
			temp = sortedVector.at(j);
			sortedVector.at(j) = sortedVector.at(j - 1);
			sortedVector.at(j - 1) = temp;
			j--;
		}
	}
	return sortedVector;
}