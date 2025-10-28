//CPP CODE HERE
class Solution {
  public:
    void poRec(Node* root,vector<int> &res){
        if(!root) return;
        res.push_back(root->data);
        poRec(root->left,res);
        poRec(root->right,res);
    }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> res;
        poRec(root,res);
        return res;
    }
};
