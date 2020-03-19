#include <iostream>
#include "Heap.h"

int main() {

    Heap* heap = new Heap();

    for (int i = 10; i >= 0; i--) {
        heap->add(i);
    }

    heap->add(3);
    heap->add(8);
    heap->add(2);

    while (!heap->isEmpty()) {
        cout << heap->getMin() << endl;
        heap->delMin();
    }

    return 0;
}
