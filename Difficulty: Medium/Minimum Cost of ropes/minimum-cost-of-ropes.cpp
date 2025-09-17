class Solution {
  public:
    int minCost(vector<int>& nums) {
        // code here
        priority_queue<int, vector<int>, greater<int>>pq(nums.begin(), nums.end());
        int ans = 0;
        
        while(pq.size() != 1){
            
            int x = pq.top();
            pq.pop();
            
            int y = pq.top();
            pq.pop();
            
            int cost = x + y;
            
            ans += cost;
            pq.push(cost);
        }
        
        return ans;
    }
};