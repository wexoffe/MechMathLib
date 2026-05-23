#include "Set.h"

Set::Set(int capacity) {
    this->capacity = capacity;
    elements = new int[this->capacity];
}

Set::Set(const Set& other) {
    capacity = other.capacity;
    size = other.size;
    elements = new int[capacity];

    for(int i = 0; i < size; i++) {
        elements[i] = other.elements[i];
    }
}

Set& Set::operator=(const Set& other) {
    if(this == &other) {
        return *this;
    }

    delete[] elements;

    capacity = other.capacity;
    size = other.size;
    elements = new int[capacity];

    for(int i = 0; i < size; i++) {
        elements[i] = other.elements[i];
    }

    return *this;
}

Set::~Set() {
    delete[] elements;
}

void Set::add(int variable) {
    if(size != capacity && !contains(variable)) {
        elements[size] = variable;
        size++;
    }
}

void Set::remove(int variable) {
    int index = -1;
    for(int i = 0; i < size; i++) {
        if(elements[i] == variable) {
            index = i;
        }
    }
    
    if(index != -1) {
        for(int i = index; i < size - 1; i++) {
            elements[i] = elements[i + 1];
        }
    
        size--;
    }
}

bool Set::contains(int variable) const {
    for(int i = 0; i < size; i++) {
        if(elements[i] == variable) {
            return true;
        }
    }

    return false;
}

int Set::get(int index) const {
    return this->elements[index];
}

int Set::getSize() const {
    return this->size;
}

int Set::getCapacity() const {
    return this->capacity;
}



