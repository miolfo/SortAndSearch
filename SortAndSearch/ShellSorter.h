#include "SortingAlgorithm.h";

class ShellSorter : public SortingAlgorithm{
public:
	enum ShellSortGapSequence { SEQUENCE_CIURA };

	ShellSorter();
	void Sort(std::vector<int16_t> &sortable) override;
	void Sort(std::vector<int16_t> &sortable, ShellSortGapSequence sequence);
private:
	void SwapElements(std::vector<int16_t> &vector, int index1, int index2);
	std::vector<int16_t> GenerateGapSequence(ShellSortGapSequence sequence);
};