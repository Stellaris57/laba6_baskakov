#include "QuickSort.hpp"
#include <algorithm>

namespace {
    void quickSort(std::vector<int>& data, int low, int high) {
        if (low < high) {
            int pivot = data[high];
            int i = low - 1;
            for (int j = low; j <= high - 1; ++j) {
                if (data[j] < pivot) {
                    ++i;
                    std::swap(data[i], data[j]);
                }
            }
            std::swap(data[i + 1], data[high]);
            int pi = i + 1;
            quickSort(data, low, pi - 1);
            quickSort(data, pi + 1, high);
        }
    }
}

void QuickSort::sort(std::vector<int>& data) {
    quickSort(data, 0, data.size() - 1);
}