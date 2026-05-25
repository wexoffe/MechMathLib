#pragma once
#include "set.h"

Set unionSets(const Set& A, const Set& B);
Set intersectionSets(const Set& A, const Set& B);
Set differenceSets(const Set& A, const Set& B);
Set complementSet(const Set& A, const Set& U);
Set symmetricDifferenceSets(const Set& A, const Set& B);
bool isSubset(const Set& A, const Set& B);