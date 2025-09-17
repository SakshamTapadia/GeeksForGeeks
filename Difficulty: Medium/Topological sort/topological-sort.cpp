class Solution {
  public:
    void dfs(unordered_map<int,vector<int>>&adj, vector<int>&vis, stack<int>&st, int u){
        
        vis[u] = 1;
        
        for(auto padosi: adj[u]){
            
            if(!vis[padosi]){
                dfs(adj,  vis, st, padosi);
            }
        }
        
        st.push(u);
    }
    
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        
        unordered_map<int,vector<int>>adj;
        vector<int>ans;
        
        for(auto x: edges){
            
            int u = x[0];
            int v = x[1];
            
            adj[u].push_back(v);
        }
        
        stack<int>st;
        vector<int>vis(V, 0);
        
        for(int i = 0; i < V; i++){
            
            if(!vis[i]){
                dfs(adj, vis, st, i);
            }
        }
        
        while(!st.empty()){
            
            ans.push_back(st.top());
            st.pop();
            
        }
        
        return ans;
        
    }
};