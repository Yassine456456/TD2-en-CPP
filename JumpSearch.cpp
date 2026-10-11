
#include "JumpSearch.h"
#include <cmath>
#include <algorithm>

int JumpSearch::search(const std::vector<int>& elements,
                       int target) {
    numberComparisons = 0;

    int n = static_cast<int>(elements.size());

    if (n == 0) return -1;

    int step = static_cast<int>(std::sqrt(n));
    int previous = 0;
    int next = step;

    while (previous < n) {
        int last = std::min(next, n) - 1;

        numberComparisons++;
        if (elements[last] >= target) break;

        previous = next;
        next += step;

        if (previous >= n) return -1;
    }

    int end = std::min(next, n);

    for (int i = previous; i < end; i++) {
        numberComparisons++;

        if (elements[i] == target) return i;
        if (elements[i] > target) return -1;
    }

    return -1;
}
