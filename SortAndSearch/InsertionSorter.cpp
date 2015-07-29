#include "InsertionSorter.h"

InsertionSorter::InsertionSorter(){
	_name = "Insertion sort";
	_description = "Simple sorting algorithm";
}

void InsertionSorter::SwapElements(std::vector<int16_t> &vector, int index1, int index2){
	int16_t tmp = vector.at(index1);
	vector.at(index1) = vector.at(index2);
	vector.at(index2) = tmp;
}

void InsertionSorter::Sort(std::vector<int16_t> &sortable){
	int16_t j;
	for (int i = 1; i < sortable.size(); i++){
		j = i;
		while (j > 0 && sortable.at(j) < sortable.at(j - 1)){
			SwapElements(sortable, j, j - 1);
			j--;
		}
	}
}