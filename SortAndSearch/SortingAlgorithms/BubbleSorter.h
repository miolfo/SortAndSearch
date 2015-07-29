#include "../SortingAlgorithm.h";


class BubbleSorter : public SortingAlgorithm{
public:
	BubbleSorter();
	void Sort(std::vector<int16_t> &sortable) override;
private:
	void SwapElements(std::vector<int16_t> &vector, int index1, int index2);
};