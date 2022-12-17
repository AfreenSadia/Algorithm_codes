#include <bits/stdc++.h>
#define NODE 5
using namespace std;

int graph[NODE][NODE] = {
   {0, 1, 0, 0, 0},
   {1, 0, 1, 1, 0},
   {0, 1, 0, 0, 1},
   {0, 1, 0, 0, 1},
   {0, 0, 1, 1, 0}
};

bool dfs(int vertex, set<int>&visited, int parent)
 {
   visited.insert(vertex);
   for(int v = 0; v<NODE; v++)
        {
      if(graph[vertex][v])
      {
         if(v == parent)
            continue;
         if(visited.find(v) != visited.end())
            return true;
         if(dfs(v, visited, vertex))
            return true;
      }
   }
   return false;
}

bool hasCycle()
 {
   set<int> visited;
   for(int v = 0; v<NODE; v++)
        {
      if(visited.find(v) != visited.end())
         continue;
      if(dfs(v, visited, -1))
       {
         return true;
      }
   }
   return false;
}

int main() {
   bool res;
   res = hasCycle();
   if(res)
      cout << "The graph has cycle." << endl;
   else
      cout << "The graph has no cycle." << endl;
}
