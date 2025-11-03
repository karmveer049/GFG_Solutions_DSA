public:
    bool bstRec(Node* root, int min, int max){
        if(!root) return true;
        if(root->data< min|| root->data>max) return false;
        return bstRec(root->left, min, root->data) && 
        bstRec(root->right,root->data,max);
    }
    bool isBST(Node* root) {
        // code here
      return bstRec(root, INT_MIN,INT_MAX);
    }
