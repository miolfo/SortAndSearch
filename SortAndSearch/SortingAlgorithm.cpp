#include "SortingAlgorithm.h"

SortingAlgorithm::SortingAlgorithm(){
	std::cout << "Initialized sorting algorithm without name or description" << std::endl;
}

SortingAlgorithm::SortingAlgorithm(std::string name, std::string description){
	_name = name;
	_description = description;
	std::cout << "Initialized sorting algorithm " << name << std::endl;
}

void SortingAlgorithm::Sort(std::vector<int16_t> &sortable){
	//No default implementation
}

std::string SortingAlgorithm::GetDescription(){
	return _description;
}
void SortingAlgorithm::SetDescription(std::string description){
	_description = description;
}
std::string SortingAlgorithm::GetName(){
	return _name;
}
void SortingAlgorithm::SetName(std::string name){
	_name = name;
}
std::string SortingAlgorithm::GetAllInfo(){
	// TODO: Build a "package" with info such as name, short&long description, optimal runtimes etc
	return _name + ":\n" + _description;
}
void SortingAlgorithm::PrintInfo(){
	// TODO: Build a "package" with info such as name, short&long description, optimal runtimes etc
	std::cout << GetAllInfo() << std::endl;
}