//CPP CODE HERE
class Solution {
  public:
    void lvRec(Node* root,int level, vector<int>&res){
        if(!root) return;
        if(level==res.size())
        res.push_back(root->data);
        lvRec(root->left,level+1,res);
        lvRec(root->right,level+1,res);
    }
    vector<int> leftView(Node *root) {
        // code here
        vector<int> res;
        lvRec(root,0,res);
        return res;
    }
};
