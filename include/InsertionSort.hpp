#pragma once
#ifndef INSERTIONSORT_HPP
#define INSERTIONSORT_HPP

#include "Strategy.hpp"

class InsertionSort : public Strategy {
public:
	void sort(std::vector<int>& data) override;
};

#endif