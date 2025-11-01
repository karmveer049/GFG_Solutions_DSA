 public:
    void dRec(Node *root,int level,unordered_map<int,vector<int>> &levelData){
        if(!root) return;
        levelData[level].push_back(root->data);
        dRec(root->left,level+1,levelData);
        dRec(root->right,level,levelData);
    }
    vector<int> diagonal(Node *root) {
        // code here
        vector<int> ans;
        unordered_map<int,vector<int>> levelData;
        dRec(root,0,levelData);
        int level=0;
        while(levelData.find(level)!=levelData.end()){
            vector<int> v=levelData[level];
            for(int i=0;i<v.size();i++){
                ans.push_back(v[i]);
            }
            level++;
        }
        return ans;
    }
