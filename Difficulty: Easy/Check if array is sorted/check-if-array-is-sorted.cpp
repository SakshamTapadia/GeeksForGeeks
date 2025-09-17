class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        int prvDigit = arr[0];
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] >= prvDigit){
                prvDigit = arr[i];
            }else{
                return false;
            }
        }
        return true;
    }
};