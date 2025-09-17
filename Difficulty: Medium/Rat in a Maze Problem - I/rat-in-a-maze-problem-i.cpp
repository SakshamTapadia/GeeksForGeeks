
// User function template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int i, int j, int n, int m, vector<vector<int>>& arr, vector<string>& ans,
               vector<vector<int>>& vis, string path) {
        if (i == n - 1 && j == m - 1) {
            ans.push_back(path);
            return;
        }

        vis[i][j] = 1;

        // UP
        if (i - 1 >= 0 && arr[i - 1][j] == 1 && vis[i - 1][j] == 0) {
            solve(i - 1, j, n, m, arr, ans, vis, path + 'U');
        }

        // DOWN
        if (i + 1 < n && arr[i + 1][j] == 1 && vis[i + 1][j] == 0) {
            solve(i + 1, j, n, m, arr, ans, vis, path + 'D');
        }

        // LEFT
        if (j - 1 >= 0 && arr[i][j - 1] == 1 && vis[i][j - 1] == 0) {
            solve(i, j - 1, n, m, arr, ans, vis, path + 'L');
        }

        // RIGHT
        if (j + 1 < m && arr[i][j + 1] == 1 && vis[i][j + 1] == 0) {
            solve(i, j + 1, n, m, arr, ans, vis, path + 'R');
        }

        vis[i][j] = 0; // backtrack
    }

    vector<string> ratInMaze(vector<vector<int>>& arr) {
        //code here
        vector<string> ans;
        int n = arr.size();
        int m = arr[0].size();
        if (arr[0][0] == 0 || arr[n-1][m-1] == 0) return ans; // no start
        vector<vector<int>> vis(n, vector<int>(m, 0));
        string path = "";
        solve(0, 0, n, m, arr, ans, vis, path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};


