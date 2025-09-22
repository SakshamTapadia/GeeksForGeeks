class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        for(int i = arr.size()-2;i>=0;i--){
            if(arr[i]!=arr[arr.size()-1]){
                return arr[i];
            }
        }
        return -1;
    }
};