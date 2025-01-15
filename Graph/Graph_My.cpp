#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
using namespace std;

class Graph {
private:
    unordered_map<int, list<int>> adjList;

public:
    void addEdge(int u, int v);
};

void Graph::addEdge(int source, int destination) {
    adjList[source].push_back(destination);
}

int main() {
    int size = 6;
    Graph g;
    g.addEdge(1, 2);
    return 0;
}
