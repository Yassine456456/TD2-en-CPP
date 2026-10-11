
#ifndef BIARYSEARCH_H
#define BIARYSEARCH_H

#include "SearchingAlgorithm.h"

class BiarySearch : public SearchingAlgorithm {
public:
    int search(const std::vector<int>& elements,
               int target) override;
};

#endif
