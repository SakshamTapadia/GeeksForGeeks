/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
         int count=0;
        Node* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        count/=2;
        Node* curr=head;
        while(count--)
        {
            curr=curr->next;
        }
        return curr->data;
    }
};

