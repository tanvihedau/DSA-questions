 int height(Node* node) {
        // code here
       if(node==NULL) return -1;
       int left = height(node-> left);
       int right = height(node-> right);
       
       int ans  = max(left, right)+1;
       return ans;
    }
