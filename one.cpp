  bool abc(int node, vector<int> adj[],int *visited,int parent,int color)
    {
        visited[node]=color;
        
        for(int u:adj[node])
        {
            if(visited[u]==0)
            {
                bool sub=abc(u,adj,visited,node,3-color);
                 if(sub==false)
                 return false;
            }
            
            else if(u!=parent   and color==visited[u] )
            return false;
        }
        return true;
    }
    
	bool isBipartite(int V, vector<int>adj[])
	{
	    int visited[V]={0};
	     int color=1;
	     int parent=-1;
	     
	     for(int i=0;i<V;i++)
	     {
	         if(visited[i]==0)
	         {
	           bool ab= abc(i,adj,visited,-1,1);
	           if(ab==false)
	           return false;
	         }
	}
	return true;
}