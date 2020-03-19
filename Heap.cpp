//
// Created by daria on 18.03.20.
//

#include "Heap.h"

void Heap::add(Node* i) {
    arr.push_back(i);

    int index = arr.size()-1;

    while (index != 0 && arr[(index-1)/2]->f > arr[index]->f) {
        swap(arr[index], arr[(index-1)/2]);
        index = (index - 1) / 2;
    }
}

Node* Heap::getMin() {
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
        swap(arr[i], arr[smallest]);
        heapify(smallest);
    }
}

void Heap::delMin() {
    swap(arr[0], arr[arr.size()-1]);
    arr.pop_back();
    heapify(0);
}
