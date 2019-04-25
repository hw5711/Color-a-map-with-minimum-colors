#include "Graph.h"
#include<iostream>
#include <list>
#include <vector>

using namespace std;

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
    cout << "Country " << v << " adjacency country " << w << endl;
}

void Graph::BFS(int s)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    int *colored = new int[V];
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
        colored[i] = -1;
    }
    // Create a queue for BFS
    list<int> queue;
    const int ColoNum = 13;
    string colo[ColoNum] = {"Blue","Brown","Green","Lavender","Orange","Pink",
                        "Red","Yellow","Violet","Gold","Gray","Indigo","Silver"};
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);
    list<int>::iterator i;
    colored[s] = 0; //colored first country

    cout << "\nConvert the graph to BFS tree:\n";
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        int setColo;
        cout << "\n" << s << " ";
        queue.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            vector<int> usedColo;
            if (!visited[*i])
            {
                cout <<"\n      (" << *i << " parent country(node) is " << s << ")" ;
                // go through visited array to get available colo also check adj
                int nodeColo = colored[s];
                for(int k = 0; k < 13; k++)
                {
                    bool result = true;
                    list<int>::iterator iter;
                    for(iter = adj[*i].begin(); iter != adj[*i].end(); iter++)
                    {
                        if(visited[*iter] == true && k == colored[*iter])
                            result = false;
                            continue;
                    }

                    if(result == true && k != nodeColo)
                    {
                        setColo = k;
                        break;
                    }
                }
                colored[*i] = setColo;
                cout<<"/nSet Country "<< *i <<" color :"<< colo[setColo];
                usedColo.clear();
                visited[*i] = true;
                queue.push_back(*i);

            }
        }
    }

    delete [] visited;
    delete [] colored;
}



