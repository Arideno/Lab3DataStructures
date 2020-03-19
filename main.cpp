#include <iostream>
#include "Heap.h"
#include <fstream>
#include "Node.h"

using namespace std;

ifstream in;
ofstream out;

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





    in.close();
    return 0;
}
