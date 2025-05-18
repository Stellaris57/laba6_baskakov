#pragma once
#ifndef SORTER_HPP
#define SORTER_HPP

#include <memory>
#include "Strategy.hpp"

class Sorter {
public:
	explicit Sorter(std::unique_ptr<Strategy> strategy);
	void sortData(std::vector<int>& data);
private:
	std::unique_ptr<Strategy> strategy;
};



#endif