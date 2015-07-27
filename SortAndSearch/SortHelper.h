#pragma once
#include <cstdint>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "Config.h"

/**Helper functions used for sorting */
namespace SortHelper{
	//Generate a vector<int16_t> with 512 elements of random numbers
	std::vector<int16_t> GenerateRandomArray();
}