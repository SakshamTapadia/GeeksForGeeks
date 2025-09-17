/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
  
  void find(Node*root,int pos,int &left,int &right){
      if(!root){
          return;
      }
      left=min(pos,left);
      right=max(pos,right);
      
      
      find(root->left,pos-1,left,right);
      find(root->right,pos+1,left,right);
  }
  
  void bottom(Node*root,int pos,vector<int> &ans,vector<int> &level,int curr){
      
      if(!root){
          return;
      }
      
      int index=pos;
     
      if(level[index]<=curr){
          ans[index]=root->data;
          level[index]=curr;
      }
      
      bottom(root->left,pos-1,ans,level,curr+1);
     bottom(root->right,pos+1,ans,level,curr+1);
  }
  
    vector<int> bottomView(Node *root) {
        int left=0;
        int right=0;
        
        find(root,0,left,right);
        
        vector<int>ans(right-left+1);
        vector<int>level(right-left+1,INT_MIN);
        
        bottom(root,-1*left,ans,level,0);
        
        return ans;
    }
};