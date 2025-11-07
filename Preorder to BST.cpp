   // Function that constructs BST from its preorder traversal.
    Node* preorder(int pre[],int size, int &idx,int min,int max){
        if(idx>=size) return nullptr;
        int key=pre[idx];
        if(key<min||key>max) return nullptr;
        Node *root= new Node();
        root->data=key;
        idx++;
        if(idx<size){
            root->left=preorder(pre, size, idx,min, key);
           
          
        }
        if(idx<size)  root->right=preorder(pre,size,idx,key,max);
          return root;
        
    }
    Node* Bst(int pre[], int size) {
        // code here
        if(size==0) return NULL;
        int idx=0;
       return preorder(pre,size,idx,INT_MIN,INT_MAX);
    }
