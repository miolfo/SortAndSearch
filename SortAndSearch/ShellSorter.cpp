#include "ShellSorter.h"

ShellSorter::ShellSorter(){
	_name = "Shell sort";
	_description = "Sorting algorithm that uses predefined gap sequences for sorting";
}

void ShellSorter::SwapElements(std::vector<int16_t> &vector, int index1, int index2){
	int16_t tmp = vector.at(index1);
	vector.at(index1) = vector.at(index2);
	vector.at(index2) = tmp;
}

void ShellSorter::Sort(std::vector<int16_t> &sortable){
	//Use Ciura gap as default gap sequence
	// TODO: use n/2 gap
	Sort(sortable, SEQUENCE_CIURA);
}

void ShellSorter::Sort(std::vector<int16_t> &sortable, ShellSortGapSequence sequence){
	std::vector<int16_t> gapSequence = GenerateGapSequence(sequence);
	int16_t tmp, l, gap;
	for (int i = 0; i < gapSequence.size(); i++){
		gap = gapSequence.at(i);
		for (int j = gap; j < sortable.size(); j++){
			for (l = j - gap; l >= 0 && sortable.at(l) > sortable.at(l + gap); l -= gap){
				SwapElements(sortable, l, l + gap);
			}
		}
	}
}

std::vector<int16_t> ShellSorter::GenerateGapSequence(ShellSortGapSequence sequence){
	std::vector<int16_t> gapSequence;
	switch (sequence){
	case SEQUENCE_CIURA:
		gapSequence = { 701, 301, 132, 57, 23, 10, 4, 1 };
		break;
	}
	return gapSequence;
}