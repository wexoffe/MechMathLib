#include <iostream>

#include "../../src/set/set.h"

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
    Set s = Set(5);

    for(int i = 0; i < 5; i++) {
        s.add(i);
    }

    int variable;
    std::cout << "Enter a number: ";
    std::cin >> variable;

    if(s.contains(variable)) {
        std::cout << "The set contains " << variable << "\n";
    } else {
        std::cout << "The set do not contains " << variable << "\n";
    }

    printSet(s);

    s.remove(2);

    printSet(s);

    return 0;
}