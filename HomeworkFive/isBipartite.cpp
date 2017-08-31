// This function returns true if graph G[V][V] is Bipartite, else false
bool isBipartite(Graph[],V, node)
{

    // -1 = no color assigned
    // 1 = first color assigned
    // 0 = second color assigned
    
    // Store colors assigned to vertices
    int colorArr[V];

    // BEGIN: Indicate that no colors are assigned for each vertex (start clean)
    for (int i = 0; i < V; ++i)
        colorArr[i] = -1;
 
    // Assign first color to source
    colorArr[node] = 1;

    // Use queue because FIFO - first in first out
    queue <int> vertexNum;
    vertexNum.push(node);
 
    // Breadth First Search
    // While loop executes until queue is empty
    while (!vertexNum.empty())
    {
        // Dequeue vertex from queue
        int u = vertexNum.front();
        vertexNum.pop();
 
         // Find all non-colored adjacent vertices
        for (int v = 0; v < V; ++v)
        {
            // An edge from u to v exists and destination v is not colored
            if (Graph[u][v] && colorArr[v] == -1)
            {
                // Assign alternate color to this adjacent v of u
                colorArr[v] = 1 - colorArr[u];
                vertexNum.push(v);
            }
 
            //  An edge from u to v exists but destination v is colored with same color as u
            // Therefore not bipartite
            else if (Graph[u][v] && colorArr[v] == colorArr[u])
                return false;
        }
    }
 
    // Successful - Graph is Bipartite
    return true;
}