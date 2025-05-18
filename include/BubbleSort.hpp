#pragma once
#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include "Strategy.hpp"

class BubbleSort : public Strategy {
public:
	void sort(std::vector<int>& data) override;
};

#endif