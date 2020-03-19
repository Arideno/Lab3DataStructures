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

void Heap::heapify(int i) {
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if (left < arr.size() && arr[smallest] > arr[left]) {
        smallest = left;
    }
    if (right < arr.size() && arr[smallest] > arr[right]) {
        smallest = right;
    }

    if (smallest != i) {
        int t = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = t;
        heapify(smallest);
    }
}

void Heap::delMin() {
    int t = arr[0];
    arr[0] = arr[arr.size()-1];
    arr[arr.size()-1] = t;
    arr.pop_back();
    heapify(0);
}
