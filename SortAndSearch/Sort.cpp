#include "Sort.h"

FSort::FSort(){
	std::cout << "Initialized FSort" << std::endl;
}

void FSort::InsertionSort(std::vector<int16_t> &sortable){
	int16_t j;
	for (int i = 1; i < sortable.size(); i++){
		j = i;
		while (j > 0 && sortable.at(j) < sortable.at(j - 1)){
			SwapVectorElements(sortable, j, j - 1);
			j--;
		}
	}
}

void FSort::SelectionSort(std::vector<int16_t> &sortable){
	int16_t minPos;;
	for (int i = 0; i < sortable.size() - 1; i++){
		minPos = i;
		for (int j = i + 1; j < sortable.size(); j++){
			if (sortable[j] < sortable[minPos]){
				minPos = j;
			}
		}
		if (minPos != i){
			SwapVectorElements(sortable, i, minPos);
		}
	}
}

void FSort::BubbleSort(std::vector<int16_t> &sortable){
	int16_t temp;
	bool swapOccurred = true;
	while (swapOccurred){
		swapOccurred = false;
		for (int i = 1; i < sortable.size(); i++){
			if (sortable.at(i) < sortable.at(i - 1)){
				SwapVectorElements(sortable, i, i - 1);
				swapOccurred = true;
			}
		}
	}
}

void FSort::ShellSort(std::vector<int16_t> &sortable, ShellSortGapSequence sequence){
	std::vector<int16_t> gapSequence = GenerateGapSequence(sequence);
}

std::vector<int16_t> FSort::GenerateGapSequence(ShellSortGapSequence sequence){
	std::vector<int16_t> gapSequence;
	switch (sequence){
	case SEQUENCE_CIURA:
		gapSequence = { 701, 301, 132, 57, 23, 10, 4, 1 };
		break;
	}
	return gapSequence;
}

void FSort::SwapVectorElements(std::vector<int16_t> &vector, int i1, int i2){
	int16_t tmp = vector.at(i1);
	vector.at(i1) = vector.at(i2);
	vector.at(i2) = tmp;
}
