//PROBLEM DESCRIPTION
Given the root of a binary tree, your task is to find the maximum depth of the tree.

Note: The maximum depth or height of the tree is the number of edges in the tree from the root to the deepest node.

Examples:

Input: root = [12, 8, 18, 5, 11]

Output: 2
Explanation: One of the longest path from the root(node 12) goes through node 8 to node 5, which has 2 edges.
Input: root = [1, 2, 3, 4, N, 10, 5, N, N, N, N, 6, 7]

Output: 3
Explanation: The longest path from the root(node 1) to a leaf node 6 with 3 edges.
Constraints:
1 ≤ number of nodes ≤ 3*104
0 ≤ node->data ≤ 105

//CPP CODE HERE
  public:
    int height(Node* root) {
        // code here
        queue<Node*> q;
        q.push(root);
        if(!root) return 0;
        int depth=-1;
        while(!q.empty()){
            int level=q.size();
            for(int i=0;i<level;i++){
                Node* curr=q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                
            }
            depth++;
        }
        return depth;
    }
