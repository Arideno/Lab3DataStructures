#include <iostream>
#include "Heap.h"
#include <fstream>
#include "Node.h"
#include <cmath>
#include <set>

using namespace std;

ifstream in;
ofstream out;

double distance(Node* node1, Node* node2) {
    double dx = abs(node1->x - node2->y);
    double dy = abs(node1->y - node2->y);
    return dx + dy;
}

int main() {
    in.open("../maze.txt");
    int n, m;
    in >> n >> m;
    vector<vector<Node*> > grid(n, vector<Node*>(m, nullptr));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char a;
            in >> a;
            Node* node = new Node(i, j, a == 'X');
            grid[i][j] = node;
        }
    }
    int x, y;
    cin >> x >> y;
    Node* start = grid[x][y];
    cin >> x >> y;
    Node* end = grid[x][y];
    start->g = 0;
    start->h = distance(start, end);
    start->f = start->g + start->h;

    set<Node*> closedSet;
    Heap* openSet = new Heap();

    openSet->add(start);

    while (!openSet->isEmpty()) {
        Node* current = openSet->getMin();
        openSet->delMin();
        closedSet.insert(current);
        if (current == end) {
            cout << "END";
            return 0;
        }
    }

    in.close();
    return 0;
}
