//PROBLEM DESCRIPTION
Given a binary tree, find its reverse level order traversal. ie- the traversal must begin from the last level.

Examples :

Input: root = [1, 3, 2]
        1
      /   \
     3     2
Output: 3 2 1
Explanation: Traversing level 1 : 3 2, Traversing level 0 : 1
Input: root = [10, 20, 30, 40, 60]
       10
      /  \
     20   30
    / \ 
   40  60
Output: 40 60 20 30 10
Explanation: Traversing level 2 : 40 60, Traversing level 1 : 20 30, Traversing level 0 : 10
Input: root = [1, 2, 3]
        1
      /   \
     2     3
Output: 2 3 1
Constraints:
1 ≤ n ≤ 105

//CPP CODE HERE
public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        vector<int> rlot;
        stack<Node*> st;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* curr=q.front();
            q.pop();
            st.push(curr);
            if(curr->right)
            q.push(curr->right);
            if(curr->left)
            q.push(curr->left);
            
        }
        while(!st.empty()){
            Node* curr=st.top();
            rlot.push_back(curr->data);
            st.pop();
        }
        return rlot;
    }
