
#include "SearchingAlgorithm.h"

long long SearchingAlgorithm::totalComparisons = 0;
int SearchingAlgorithm::totalSearch = 0;
double SearchingAlgorithm::averageComparisons = 0.0;

SearchingAlgorithm::SearchingAlgorithm()
    : numberComparisons(0) {
}

void SearchingAlgorithm::displaySearchResults(
    std::ostream& out, int results, int target) {

    totalComparisons += numberComparisons;
    totalSearch++;

    averageComparisons =
        static_cast<double>(totalComparisons) / totalSearch;

    if (results != -1) {
        out << "Element " << target
            << " trouve a l'indice " << results << '\n';
    } else {
        out << "Element " << target
            << " non trouve.\n";
    }

    out << "Comparaisons pour cette recherche : "
        << numberComparisons << '\n';

    out << "Nombre total de comparaisons : "
        << totalComparisons << '\n';

    out << "Nombre total de recherches : "
        << totalSearch << '\n';

    out << "Moyenne des comparaisons : "
        << averageComparisons << '\n';
}
