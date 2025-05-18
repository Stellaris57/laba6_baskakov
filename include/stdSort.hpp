#pragma once
#ifndef STDSORT_HPP
#define STDSORT_HPP

#include "Strategy.hpp"

class stdSort : public Strategy {
public:
	void sort(std::vector<int>& data) override;
};

#endif