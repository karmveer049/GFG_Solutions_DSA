 public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int> ans;
        stack<Node*> s1;
        stack<Node*> s2;
        s1.push(root);
        while(!s1.empty()||!s2.empty()){
            while(!s1.empty()){
                Node* curr=s1.top();
                s1.pop();
                ans.push_back(curr->data);
                if(curr->left) s2.push(curr->left);
                if(curr->right) s2.push(curr->right);
            }
            while(!s2.empty()){
                Node* curr=s2.top();
                s2.pop();
                ans.push_back(curr->data);
                 if(curr->right) s1.push(curr->right);
                if(curr->left) s1.push(curr->left);
            }
        }
        return ans;
    }
