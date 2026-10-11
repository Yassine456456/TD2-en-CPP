
#ifndef SEARCHINGALGORITHM_H
#define SEARCHINGALGORITHM_H

#include <iostream>
#include <vector>

class SearchingAlgorithm {
protected:
    int numberComparisons;

    static long long totalComparisons;
    static int totalSearch;
    static double averageComparisons;

public:
    SearchingAlgorithm();

    virtual ~SearchingAlgorithm() = default;

    virtual int search(const std::vector<int>& elements,
                       int target) = 0;

    void displaySearchResults(std::ostream& out,
                              int results,
                              int target);
};

#endif
