#include <iostream>
#include <climits>
using namespace std;

int findMinVertex(int *weights, bool *visited, int n)
{
   int minVertex = -1;                  // Initializing min vertex to -1 
  for (int i = 0; i < n; i++)
  {
     /*Conditions : the vertex must be unvisited and either minVertex value is -1
     or if minVertex has some vertex to it, then weight of currentvertex
     should be less than the weight of the minVertex.*/
     
    if (!visited[i] && (minVertex == -1 || weights[i] < weights[minVertex])) 
    {
    minVertex = i;                        // assigning min vertex
    }
  }
 return minVertex;
}

void prims(int **edges, int nodes)
{
    //one parent array, one weighted array and one visited array is needed 
    int *parent = new int[nodes];  
    int *weights = new int[nodes];
    bool *visited = new bool[nodes];

    for(int i = 0; i < nodes; i++)
    {
      visited[i] = false;                  //initially visited node array is set to false
      weights[i] = INT_MAX;                // And weights are set to infinity
    }
    
    // Values assigned to vertex 0.(the selected starting vertex to begin with)
    parent[0] = -1; 
    weights[0] = 0;

    for (int i = 0; i < nodes-1; i++) 
    {
         int minVertex = findMinVertex(weights, visited, nodes);           // finding min vertex
         visited[minVertex] = true;                        // marking the min vertex as visited

         // Explore unvisited neighbors
       for (int j = 0; j < nodes; j++) 
       {
          if(edges[minVertex][j] != 0 && !visited[j])
          {
              // decide whether to update or not
            if(edges[minVertex][j] < weights[j])
            {
              weights[j] = edges[minVertex][j];           // update the weighted array
              parent[j] = minVertex;                      // update the parent array
            }
          }
       }
    }
    
    // printing the final MST path
    for (int i = 0; i < nodes; i++) 
    {
       if (parent[i] < i) 
       {
         cout << parent[i] << " " << i << " " <<weights[i] << endl;
       }
       else
       {
         cout << i << " " << parent[i] << " " << weights[i] << endl;
       }
    }
}


int main()
{
    int nodes;
    int e;                                  // e--> no of vertices
    cout << "enter nodes and vertices";
    cin >> nodes >> e;
    int **edges = new int*[nodes];           // Adjacency matrix used to store the graph
    for (int i = 0; i < nodes; i++) 
    {
      edges[i] = new int[nodes];
      for (int j = 0; j < nodes; j++) 
      {
        edges[i][j] = 0;                      /* Initially all pairs are assigned weight = 0 which
                                              means that there is no edge between them*/
      }
    }
    for (int i = 0; i < e; i++)
    {
      int st, ed, weight;                      // st --> start  ed --> end
      cin >> st >> ed >> weight; 
      edges[st][ed] = weight;
      edges[ed][st] = weight;
    }
    prims(edges, nodes);
    for(int i = 0; i < nodes; i++)
    {
      delete [] edges[i]; 
    }
    delete [] edges;
    return 0;
}
