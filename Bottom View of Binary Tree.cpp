 public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int> ans;
        int minhd=0,maxhd=0;
        if(!root) return ans;
        unordered_map<int,int> ndhd;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto front=q.front();
            Node* node=front.first;
            int hd=front.second;
            q.pop();
            ndhd[hd]=node->data;
            minhd=min(hd,minhd);
            maxhd=max(hd,maxhd);
            if(node->left) q.push({node->left,hd-1});
          //  if(node->right) q.push({node->right,hd+1});
        }
        for(int i=minhd;i<=maxhd;i++){
            ans.push_back(ndhd[i]);
        }
        return ans;
    }
