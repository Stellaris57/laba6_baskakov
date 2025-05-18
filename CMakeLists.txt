cmake_minimum_required(VERSION 3.10)
project(StrategyPatternLab)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(main
    src/BubbleSort.cpp
    src/QuickSort.cpp
    src/stdSort.cpp
    src/InsertionSort.cpp
    src/Sorter.cpp
    main.cpp
)