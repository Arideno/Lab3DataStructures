//
// Created by daria on 18.03.20.
//

#include "Node.h"
#include <vector>
#include <algorithm>

using namespace std;

#ifndef LAB3DATASTRUCTURES_HEAP_H
#define LAB3DATASTRUCTURES_HEAP_H


class Heap {
private:
    vector<Node*> arr;
public:
    void add(Node* i);
    void delMin();
    Node* getMin();
    bool isEmpty();
    void heapify(int i);
};


#endif //LAB3DATASTRUCTURES_HEAP_H
