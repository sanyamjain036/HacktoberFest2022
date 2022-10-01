/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>ans;
    
    void solve(Node *node)
    {
        if(node==NULL)
        {
            return;
        }
        ans.push_back(node->val);
        for(int i=0;i<node->children.size();i++)
        {
            solve(node->children[i]);
        }
        return;
    }
    
    vector<int> preorder(Node* root) {
        
        solve(root);
        
        return ans;
        
    }
};