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

std::vector<int16_t> FSort::SelectionSort(std::vector<int16_t> sortable){
	std::vector<int16_t> sortedVector = sortable;
	int16_t minPos, temp;
	for (int i = 0; i < sortedVector.size() - 1; i++){
		minPos = i;
		for (int j = i + 1; j < sortedVector.size(); j++){
			if (sortedVector[j] < sortedVector[minPos]){
				minPos = j;
			}
		}
		if (minPos != i){
			temp = sortedVector.at(i);
			sortedVector.at(i) = sortedVector.at(minPos);
			sortedVector.at(minPos) = temp;
		}
	}
	return sortedVector;
}

std::vector<int16_t> FSort::BubbleSort(std::vector<int16_t> sortable){
	std::vector<int16_t> sortedVector = sortable;
	int16_t temp;
	bool swapOccurred = true;
	while (swapOccurred){
		swapOccurred = false;
		for (int i = 1; i < sortedVector.size(); i++){
			if (sortedVector.at(i) < sortedVector.at(i - 1)){
				temp = sortedVector.at(i);
				sortedVector.at(i) = sortedVector.at(i - 1);
				sortedVector.at(i - 1) = temp;
				swapOccurred = true;
			}
		}
	}
	return sortedVector;
}

std::vector<int16_t> FSort::ShellSort(std::vector<int16_t> sortable, ShellSortGapSequence sequence){
	std::vector<int16_t> sortedVector = sortable;
	std::vector<int16_t> gapSequence = GenerateGapSequence(sequence);
	return sortedVector;
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