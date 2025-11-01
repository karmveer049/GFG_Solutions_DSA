 public:
  int ibRec(Node* root){
      if(!root) return 0;
      int lheight=ibRec(root->left);
      int rheight=ibRec(root->right);
      if(lheight==-1||rheight==-1|| abs(lheight-rheight)>1) return -1;
      return 1+max(lheight,rheight);
  }
    bool isBalanced(Node* root) {
        // code here
        return (ibRec(root)>0);
    }
