//
// Created by daria on 18.03.20.
//

#include <vector>

using namespace std;

#ifndef LAB3DATASTRUCTURES_HEAP_H
#define LAB3DATASTRUCTURES_HEAP_H


class Heap {
private:
    vector<int> arr;
public:
    void add(int i);
    void delMin();
    int getMin();
    bool isEmpty();
    void heapify(int i);
};


#endif //LAB3DATASTRUCTURES_HEAP_H
