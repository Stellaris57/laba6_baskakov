#pragma once
#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include "Strategy.hpp"

class QuickSort : public Strategy {
public:
	void sort(std::vector<int>& data) override;
};

#endif