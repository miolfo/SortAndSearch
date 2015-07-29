#include "SelectionSorter.h"

SelectionSorter::SelectionSorter(){
	_name = "Selection sort";
	_description = "Simple sorting algorithm";
}

void SelectionSorter::SwapElements(std::vector<int16_t> &vector, int index1, int index2){
	int16_t tmp = vector.at(index1);
	vector.at(index1) = vector.at(index2);
	vector.at(index2) = tmp;
}

void SelectionSorter::Sort(std::vector<int16_t> &sortable){
	int16_t minPos;;
	for (int i = 0; i < sortable.size() - 1; i++){
		minPos = i;
		for (int j = i + 1; j < sortable.size(); j++){
			if (sortable[j] < sortable[minPos]){
				minPos = j;
			}
		}
		if (minPos != i){
			SwapElements(sortable, i, minPos);
		}
	}
}