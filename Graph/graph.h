#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph {
private:
    unordered_map<int, list<int>> adjList;

public:
    void addEdge(int u, int v);
    void printGraph();
    void BFS(int start);
};

void Graph::addEdge(int u, int v) {
    adjList[u].push_back(v);
}

void Graph::printGraph() {
    for (auto &item : adjList) {
        cout << item.first << "->";
        for (auto &node : item.second) {
            cout << node << " ";
        }
        cout << endl;
    }
}

void Graph::BFS(int start) {
    unordered_map<int, bool> visited;
    list<int> queue;

    visited[start] = true;
    cout << start << " ";
    queue.push_back(start);
    while (!queue.empty()) {
        int node = queue.front();
        queue.pop_front();

        for (auto neighbour : adjList[node]) {
            if (!visited[neighbour]) {
                cout << neighbour << " ";
                visited[neighbour] = true;
                queue.push_back(neighbour);
            }
        }
    }
}

int main() {
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Adjacency List:" << endl;
    g.printGraph();

    cout << "BFS Traversal starting from vertex 2:" << endl;
    g.BFS(2);

    return 0;
}
