// DEPTH FIRST SEARCH
bool containsCycle(){
    // Mark all the vertices as not visited - stack implementation
    bool visited[numofVertices]; // each vertex will have true or false value
    for (i = 0; i < V; i++)
        visited[i] = false;
  
    // recursive call - depth first
    for (currentNode = 0; currentNode < numofVertices; currentNode++)
        // If vertex hasn't been visited
        if (!visited[currentNode]) 
            // Check if Cycle exists
          if (checkCycle(currentNode, visited, -1))
             return true;
    return false;
}

bool checkNode(currentNode, bool visited[], int parentNode){
    // When you arrive at current node, indicate it as visited
    visited[currentNode] = true;
  
    list adj[V];  // list of adjacent vertices

    // Check if adjacent elements have been visited or not
    for (i, i < adj[i],i++){

        // If adjacent node has not been visited, vall again
        if (!visited[i]){
           if (checkNode(i, visited, currentNode))
              return true;
        } 
        // If adjacent node is visited but not parent of current vertex
        // SUCCESSFUL - cycle exists
        else if (*i != parent)
           return true;
    }
    // UNSUCCESSFUL
    return false;
}
  
