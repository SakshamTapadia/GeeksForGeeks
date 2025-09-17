// User Function Template
class Solution {
public:
    typedef pair<int, int> P;

    vector<int> dijkstra(int V, vector<vector<int>>& edges, int src) {
        vector<vector<pair<int, int>>> adj(V);
        for (auto& e : edges) {
            int u = e[0], v = e[1], w = e[2];
            adj[u].push_back({v, w});
        }
        vector<int> dist(V, INT_MAX);
        dist[src] = 0;
        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push({0, src});

        while (!pq.empty()) {
            P temp = pq.top();
            pq.pop();
            int currDist = temp.first;
            int node = temp.second;

            if (currDist > dist[node]) continue;

            for (auto& neighbor : adj[node]) {
                int v = neighbor.first;
                int weight = neighbor.second;
                if (dist[v] > currDist + weight) {
                    dist[v] = currDist + weight;
                    pq.push({dist[v], v});
                }
            }
        }

        return dist;
    }
};

