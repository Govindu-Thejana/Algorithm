#include "graph.h" // Include the header file correctly


int main()
{
    Graph g;

    g.addEdge(0, 1);
    g.addEdge(1, 0);

    g.addEdge(0, 2);
    g.addEdge(2, 0);

    g.addEdge(1, 4);
    g.addEdge(4, 1);

    g.addEdge(4, 3);
    g.addEdge(3, 4);

    g.addEdge(3, 7);
    g.addEdge(7, 3);

    g.addEdge(4, 5);
    g.addEdge(5, 4);

    g.addEdge(5, 6);
    g.addEdge(6, 5);

    g.printGraph();

    return 0;
}
