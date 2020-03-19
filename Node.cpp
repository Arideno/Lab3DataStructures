//
// Created by daria on 19.03.20.
//

#include "Node.h"

Node::Node(int x, int y, bool isWall) {
    this->x = x;
    this->y = y;
    this->isWall = isWall;
}

vector<Node *> Node::getNeighbours(const vector<vector<Node *> > &grid) {
    vector<Node*> neighbours;

    if (x-1 >= 0)
        neighbours.push_back(grid[x-1][y]);

    if (y-1 >= 0)
        neighbours.push_back(grid[x][y-1]);

    if (x+1 < grid.size())
        neighbours.push_back(grid[x+1][y]);

    if (y+1 < grid[x].size())
        neighbours.push_back(grid[x][y+1]);

    return neighbours;
}
