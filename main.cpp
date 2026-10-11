
#include <iostream>
#include <vector>

#include "LinearSearch.h"
#include "JumpSearch.h"
#include "BiarySearch.h"

int main() {
    std::vector<int> elements = {
        2, 4, 6, 8, 10, 12, 14, 16, 18, 20
    };

    int target = 12;

    LinearSearch linear;
    JumpSearch jump;
    BiarySearch binary;

    std::cout << "=== Linear Search ===\n";
    int r1 = linear.search(elements, target);
    linear.displaySearchResults(std::cout, r1, target);

    std::cout << "\n=== Jump Search ===\n";
    int r2 = jump.search(elements, target);
    jump.displaySearchResults(std::cout, r2, target);

    std::cout << "\n=== Binary Search ===\n";
    int r3 = binary.search(elements, target);
    binary.displaySearchResults(std::cout, r3, target);

    return 0;
}
