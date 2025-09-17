class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        queue<int> q;
        vector<int> vis(n,0);
        vector<int> res;
        
        q.push(0);
        vis[0] = 1;
        
        while(!q.empty()){
            int topel = q.front();
            q.pop();
            res.push_back(topel);
            
            for(auto it: adj[topel]){
                if(vis[it]==0){
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
        return res;
        
    }
};