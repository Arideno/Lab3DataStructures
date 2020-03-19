//
// Created by daria on 19.03.20.
//

#include <vector>

using namespace std;

#ifndef LAB3DATASTRUCTURES_NODE_H
#define LAB3DATASTRUCTURES_NODE_H


class Node {
public:
    int x;
    int y;
    Node* parent = nullptr;
    double h = INT_MAX;
    double g = INT_MAX;
    double f = INT_MAX;
    bool isWall;
    vector<Node*> getNeighbours(const vector<vector<Node*> >& grid);
    Node(int x, int y, bool isWall);
};


#endif //LAB3DATASTRUCTURES_NODE_H
