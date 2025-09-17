class Solution {
  public:
    void dfs(unordered_map<int,vector<int>>&adj, vector<int>&vis, vector<int>inRecursion, int u, bool &ans){
        
        if(ans) return;
        vis[u] = 1;
        inRecursion[u] = true;
        
        for(auto padosi: adj[u]){
            
            if(!vis[padosi]){
                dfs(adj, vis, inRecursion, padosi, ans);
            }else if(inRecursion[padosi]){
                ans = true;
                return;
            }
        }
        
        inRecursion[u] = false;
    }
    
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        unordered_map<int,vector<int>>adj;
        bool ans = false;
        
        for(auto x: edges){
            
            int u = x[0];
            int v = x[1];
            
            adj[u].push_back(v);
            
        }
        
        vector<int>vis(V, 0);
        vector<int>inRecursion(V, 0);
        
        for(int i = 0; i < V; i++){
            
            if(!vis[i]){
                dfs(adj, vis, inRecursion, i, ans);
            }
        }
        
        return ans;
    }
};