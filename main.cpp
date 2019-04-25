#include <iostream>
#include "Graph.h"

using namespace std;

// Driver program to test methods of graph class
int main()
{
    // Create a graph given in the above diagram
    Graph g(13);
    cout << "Display the adjacency list representation of the grapgh form.\n";

    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(1, 5);
    g.addEdge(1, 6);
    g.addEdge(1, 7);
    g.addEdge(1, 9);
    g.addEdge(1, 10);
    g.addEdge(1, 11);
    g.addEdge(1, 12);
    g.addEdge(2, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.addEdge(3, 2);
    g.addEdge(3, 4);
    g.addEdge(4, 1);
    g.addEdge(4, 3);
    g.addEdge(4, 5);
    g.addEdge(5, 1);
    g.addEdge(5, 4);
    g.addEdge(5, 6);
    g.addEdge(6, 1);
    g.addEdge(6, 5);
    g.addEdge(6, 7);
    g.addEdge(6, 8);
    g.addEdge(7, 1);
    g.addEdge(7, 6);
    g.addEdge(7, 8);
    g.addEdge(7, 9);
    g.addEdge(7, 13);
    g.addEdge(9, 1);
    g.addEdge(9, 7);
    g.addEdge(9, 10);
    g.addEdge(9, 11);
    g.addEdge(9, 13);
    g.addEdge(10, 1);
    g.addEdge(10, 9);
    g.addEdge(10,11);
    g.addEdge(11, 1);
    g.addEdge(11, 9);
    g.addEdge(11, 10);
    g.addEdge(11,12);
    g.addEdge(11, 13);
    g.addEdge(12, 1);
    g.addEdge(12, 11);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);

    return 0;
}
