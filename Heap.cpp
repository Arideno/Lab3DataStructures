//
// Created by daria on 18.03.20.
//

#include "Heap.h"

void Heap::add(int i) {
    arr.push_back(i);

    int index = arr.size()-1;

    while (index != 0 && arr[(index-1)/2] > arr[index]) {
        int t = arr[index];
        arr[index] = arr[(index-1)/2];
        arr[(index-1)/2] = t;
        index = (index - 1) / 2;
    }
}

int Heap::getMin() {
    return arr[0];
}

bool Heap::isEmpty() {
    return arr.empty();
}


