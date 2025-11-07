  Node* deleteNode(Node* root, int key) {
        // code here
        if(!root) return nullptr;
        Node* target=nullptr;
        Node* deepest=nullptr;
        Node* pod=nullptr; //parent of deepest
        queue<pair<Node*,Node*>> q;
        q.push({root,nullptr});
        while(!q.empty()){
            auto[curr,parent]=q.front();
            q.pop();
            if(curr->data==key) target=curr;
            deepest=curr;
            pod=parent;
            if(curr->left) q.push({curr->left,curr});
            if(curr->right) q.push({curr->right,curr});
        }
        if(!target) return root;
        if(target==deepest&& deepest==root) {
            delete root;
            return nullptr;
        } 
        if(target!=deepest) {
            target->data=deepest->data;
            
         }
         if(pod){
             if(pod->left==deepest) 
                 pod->left=nullptr;
                 else pod->right=nullptr;
             
         }
         delete deepest;
         return root;
    }
