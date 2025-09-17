
class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int sum =0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        int mean = sum/n;
        return mean;
    }
};

