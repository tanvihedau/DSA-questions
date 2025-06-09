    vector<vector<int>> levelOrder(Node *root) {
vector<vector<int>> res;
if(root==NULL) return res;
queue<Node*> q;
q.push(root);
   while(!q.empty()){
       int levelSize = q.size();
       vector<int> currLevel;
       for(int i=0; i<levelSize; i++){
           Node* node  = q.front();
           q.pop();
           currLevel.push_back(node->data);
           
           if(node->left) q.push(  node->left);
           if(node->right) q.push(node->right);
       }
       res.push_back(currLevel);    
   }
   return res;
    }
