#include <iostream>
#include <vector>
#include "Sorter.hpp"
#include "BubbleSort.hpp"
#include "QuickSort.hpp"
#include "InsertionSort.hpp"
#include "stdSort.hpp"

int main() {
	std::vector<int> data = { 9,5,7,2,8,4,3 };
	std::cout << "Our vector: ";
	for (int num : data) {
		std::cout << num << " ";
	}
	std::cout << "\n\n";

	Sorter bubbleSorter(std::make_unique<BubbleSort>());
	auto dataBubble = data;
	bubbleSorter.sortData(dataBubble);
	std::cout << "BubbleSort: ";
	for (int num : dataBubble) {
		std::cout << num << " ";
	}
	std::cout << "\n\n";

	Sorter quickSorter(std::make_unique<QuickSort>());
	auto dataQuick = data;
	quickSorter.sortData(dataQuick);
	std::cout << "QuickSort: ";
	for (int num : dataQuick) {
		std::cout << num << " ";
	}
	std::cout << "\n\n";

	Sorter stdSorter(std::make_unique<stdSort>());
	auto dataSTD = data;
	stdSorter.sortData(dataSTD);
	std::cout << "stdSort: ";
	for (int num : dataSTD) {
		std::cout << num << " ";
	}
	std::cout << "\n\n";

	Sorter insertSorter(std::make_unique<InsertionSort>());
	auto dataInsertion = data;
	quickSorter.sortData(dataInsertion);
	std::cout << "InsertionSort: ";
	for (int num : dataInsertion) {
		std::cout << num << " ";
	}
	std::cout << "\n\n";
}
