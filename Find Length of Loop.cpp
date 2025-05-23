class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node* slow = head, *fast= head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                int count =1;
                while((fast=fast->next)!= slow  )count++;
                return count;
            }
        }
        return 0;
    }
};
