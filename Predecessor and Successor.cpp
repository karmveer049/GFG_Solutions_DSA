 public:
    Node* findpre(Node* root, int key){
        Node* pre=NULL;
        while(root){
            if(root->data<key){
                pre=root;
                root=root->right;
            }
            else root=root->left;
        }
        return pre;
    }
    Node* findsuc(Node* root, int key){
        Node* suc=NULL;
        while(root){
            if(root->data>key){
                suc=root;
                root=root->left;
                
            }
            else root=root->right;
        }
        return suc;
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        
       Node* pre= findpre(root,key);
        Node* suc=findsuc(root,key);
        return {pre,suc};
    }
