#include "SortingAlgorithm.h";

class SelectionSorter : public SortingAlgorithm{
public:
	SelectionSorter();
	void Sort(std::vector<int16_t> &sortable) override;
private:
	void SwapElements(std::vector<int16_t> &vector, int index1, int index2);
};