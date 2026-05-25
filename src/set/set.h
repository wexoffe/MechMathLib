#pragma once

class Set {
    int* elements;
    int capacity;
    int size = 0;

    public:

    Set(int capacity);
    Set(const Set& other);
    Set& operator=(const Set& other);
    ~Set();

    void add(int variable);
    void remove(int variable);
    bool contains(int variable) const;

    int get(int index) const;
    int getSize() const;
    int getCapacity() const;
};