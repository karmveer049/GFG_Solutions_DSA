//CPP CODE HERE
class Solution {
  public:
    void poRec(Node* root,vector<int> &res){
        if(!root) return;
        poRec(root->left,res);
        poRec(root->right,res);
        res.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> res;
        poRec(root,res);
        return res;
    }
};
