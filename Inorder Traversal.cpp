//CPP CODE HERE
class Solution {
  public:
    void ioRec(Node* root, vector<int> &res){
        if(!root) return;
        ioRec(root->left,res);
        res.push_back(root->data);
        ioRec(root->right,res);
    }
    vector<int> inOrder(Node* root) {
        // code here
        vector<int> res;
        ioRec(root,res);
        return res;
    }
};
