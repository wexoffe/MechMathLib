#include "operations.h"

Set unionSets(const Set& A, const Set& B) {
    int capacity = A.getSize() + B.getSize();
    Set T(capacity);

    for(int i = 0; i < A.getSize(); i++) {
        T.add(A.get(i));
    }
    for(int i = 0; i < B.getSize(); i++) {
        T.add(B.get(i));
    }

    return T;
}

Set intersectionSets(const Set& A, const Set& B) {
    int capacity = A.getSize() < B.getSize() ? A.getSize() : B.getSize();
    Set T(capacity);

    for(int i = 0; i < A.getSize(); i++) {
        if(B.contains(A.get(i))) {
            T.add(A.get(i));
        }
    }
    return T;
}

Set differenceSets(const Set& A, const Set& B) {
    Set T(A.getSize());

    for(int i = 0; i < A.getSize(); i++) {
        if(!B.contains(A.get(i))) {
            T.add(A.get(i));
        }
    }
    return T;
}

Set complementSet(const Set& A, const Set& U) {
    Set T(U.getSize() - A.getSize());

    for(int i = 0; i < U.getSize(); i++) {
        int element = U.get(i);
        if(!A.contains(element)) {
            T.add(element);
        }
    }

    return T;
}

Set symmetricDifferenceSets(const Set& A, const Set& B) {
    Set diff1 = differenceSets(A, B);
    Set diff2 = differenceSets(B, A);
    return unionSets(diff1, diff2);
}

bool isSubset(const Set& A, const Set& B) {
    for(int i = 0; i < A.getSize(); i++) {
        if(!B.contains(A.get(i))) {
            return false;
        }
    }

    return true;
}