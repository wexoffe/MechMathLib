#include "../../src/set/operations.h"
#include <iostream>

void printSet(const Set& set) { 
    if(set.getSize() == 0) std::cout<< "{}\n";
    else {
        std::cout << "{";
        for(int i = 0; i < set.getSize() - 1; i++) {
            std::cout << set.get(i) << ", ";
        }
        std::cout << set.get(set.getSize() - 1) << "}\n";
    }
}

int main() {
    Set A(5);
    Set B(5);
    Set U(10);

    for(int i = 0; i < 5; i++) {
        A.add(i);
    }

    for(int i = 3; i < 8; i++) {
        B.add(i);
    }

    for(int i = 0; i < 10; i++) {
        U.add(i);
    }

    std::cout << "Set A: ";
    printSet(A);

    std::cout << "Set B: ";
    printSet(B);

    std::cout << "Set U: ";
    printSet(U);

    std::cout << "Union of A and B: ";
    printSet(unionSets(A, B));

    std::cout << "Intersection of A and B: ";
    printSet(intersectionSets(A, B));

    std::cout << "Difference of A and B: ";
    printSet(differenceSets(A, B));

    std::cout << "Complement from B to U: ";
    printSet(complementSet(B, U));

    std::cout << "Symmetric Difference of A and B: ";
    printSet(symmetricDifferenceSets(A, B));

    return 0;
}