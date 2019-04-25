#ifndef GRAPH_H
#define GRAPH_H
#include <list>

using namespace std;

class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};
#endif // GRAPH_H
