#include "Sorter.hpp"

Sorter::Sorter(std::unique_ptr<Strategy> strategy)
    : strategy(std::move(strategy)) {}

void Sorter::sortData(std::vector<int>& data) {
    strategy->sort(data);
}