
#include<iostream>
#include<list>
  
using namespace std;

class Graph 
{ 
    int V;  
    list<int> *adj;  
    void countPathsUtil(int, int, bool [], int &); 
  
public:  
  Graph(int V) {
    this->V = V; 
    adj = new list<int>[V]; 
  }  
  void addEdge(int u, int v) {
    adj[u].push_back(v); 
  }
  int countPaths(int s, int d); 
}; 

int Graph::countPaths(int s, int d) 
{ 
    bool *visited = new bool[V]; 
    memset(visited, false, sizeof(visited));  
    int pathCount = 0; 
    countPathsUtil(s, d, visited, pathCount); 
    return pathCount; 
} 
void Graph::countPathsUtil(int u, int d, bool visited[], int &pathCount) 
{ 
  visited[u] = true; 
  if (u == d) 
    pathCount++; 
  else
  { 
    list<int>::iterator i; 
    for (i = adj[u].begin(); i != adj[u].end(); ++i) 
      if (!visited[*i]) 
        countPathsUtil(*i, d, visited, pathCount); 
  } 
  
  visited[u] = false; 
} 
  
int main() 
{ 
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(0, 3); 
    g.addEdge(2, 0); 
    g.addEdge(2, 1); 
    g.addEdge(1, 3); 
  
    int s = 2, d = 3; 
    cout << g.countPaths(s, d); 
  
    return 0; 
} 