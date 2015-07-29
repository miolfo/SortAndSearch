#include "BubbleSorter.h"

BubbleSorter::BubbleSorter(){
	_name = "Bubble sort";
	_description = "Sorting algorithm that keeps checking adjacent values and swapping them if necessary";
}

void BubbleSorter::SwapElements(std::vector<int16_t> &vector, int index1, int index2){
	int16_t tmp = vector.at(index1);
	vector.at(index1) = vector.at(index2);
	vector.at(index2) = tmp;
}

void BubbleSorter::Sort(std::vector<int16_t> &sortable){
	int16_t temp;
	bool swapOccurred = true;
	while (swapOccurred){
		swapOccurred = false;
		for (int i = 1; i < sortable.size(); i++){
			if (sortable.at(i) < sortable.at(i - 1)){
				SwapElements(sortable, i, i - 1);
				swapOccurred = true;
			}
		}
	}
}