/******************************************************************************
DFS of a Bipartite Graph
1
3 2
0 1
1 2
*******************************************************************************/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
bool solve(int color[], int idx, vector<int> adj[]){
    for(auto it: adj[idx]){
        if(color[it] == -1){
            color[it] = 1-color[idx];
            if(!solve(color, it, adj)) return false;
        }else if(color[it] == color[idx]){
            return false;
        }
    }
    return true;
}

bool isBipartite(int V, vector<int> adj[]){
    int color[V];
    memset(color, -1, sizeof color);
    for(int i = 0 ; i < V; i++)
    if(color[i] == -1)
    if(!solve(color, i, adj)){
        return false;
    }
    return true;
}
	
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends