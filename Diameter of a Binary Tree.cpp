//CPP CODE HERE
 public:
  int maxd=0;
  int dRec(Node* root){
      if(!root) return 0;
      int lheight=dRec(root->left);
      int rheight=dRec(root->right);
      if(lheight+rheight>maxd)
      maxd=lheight+rheight;
      return 1+max(lheight,rheight);
  }
    int diameter(Node* root) {
        // code here
         maxd=0;
        dRec(root);
        return maxd;
    }
