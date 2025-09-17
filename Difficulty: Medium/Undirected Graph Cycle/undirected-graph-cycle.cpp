class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        unordered_map<int, vector<int>> adj;
        vector<int> vis(V, 0);

        for(auto x: edges){
            
            int u = x[0];
            int v = x[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }

        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                queue<pair<int, int>> q;
                q.push({i, -1});
                vis[i] = 1;

                while(!q.empty()) {
                    int u = q.front().first;
                    int parent = q.front().second;
                    q.pop();

                    for(auto padosi: adj[u]) {
                        
                        if(!vis[padosi]) {
                            
                            q.push({padosi, u});
                            vis[padosi] = 1;
                            
                        } else if(padosi != parent) {
                      
                            return true;
                        }
                    }
                }
            }
        }

        return false;
    }
};