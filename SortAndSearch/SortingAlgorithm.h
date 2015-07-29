#pragma once
#include <iostream>
#include <vector>
#include <cstdint>
#include <ctime>
#include <string>

class SortingAlgorithm{
private:
	std::string _name, _description;
public:
	SortingAlgorithm();
	SortingAlgorithm(std::string name, std::string description);

	virtual void Sort(std::vector<int16_t> &sortable);

	std::string GetName();
	std::string SetName();
	std::string GetDescription();
	std::string SetDescription();
};