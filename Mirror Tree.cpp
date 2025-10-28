//CPP CODE HERE
class Solution {
  public:
    
    void mirror(Node* root) {
        // code here
        
        if(!root) return;
        swap(root->left,root->right);
        mirror(root->left);
        mirror(root->right);
    }
};
