//CPP CODE HERE
class Solution {
  public:
    void rvRec(Node* root,int level,vector<int>&res){
        if(!root) return;
        if(level==res.size()) res.push_back(root->data);
        rvRec(root->right,level+1,res);
        rvRec(root->left,level+1,res);
    }
    vector<int> rightView(Node *root) {
        //  code here
        vector<int> res;
        rvRec(root,0,res);
        return res;
    }
};
