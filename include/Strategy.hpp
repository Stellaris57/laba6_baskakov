#pragma once
#ifndef STRATEGY_HPP
#define STRATEGY_HPP

#include <vector>

class Strategy {
public:
	virtual ~Strategy() = default;
	virtual void sort(std::vector<int>& data) = 0;
};

#endif