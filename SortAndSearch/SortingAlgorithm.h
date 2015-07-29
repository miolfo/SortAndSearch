#pragma once
#include "Common.h"

class SortingAlgorithm{
protected:
	std::string _name, _description;
public:
	SortingAlgorithm();
	SortingAlgorithm(std::string name, std::string description);
	/** */
	virtual void Sort(std::vector<int16_t> &sortable);

	std::string GetName();
	void SetName(std::string name);
	std::string GetDescription();
	void SetDescription(std::string description);
	std::string GetAllInfo();
	
	void PrintInfo();
};