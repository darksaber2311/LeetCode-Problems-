/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
   /* void dfs(unordered_map<Node*,int> &vis,Node* node)
    {
        if(!node)return;
        while(Node* x : node->neighbours)
        {
            vis[x]++;
            if(vis[x]<2)
            {
                dfs(vis,x);
            }
            
        }
    }*/
    unordered_map<Node*,Node*>mp;
    Node* cloneGraph(Node* node) {
        if(node == nullptr) return nullptr;

        if(mp.find(node)!=mp.end())
            return mp[node];

        Node* newNode = new Node(node->val);
        
        
        mp[node] = newNode;

        //newNode->val = node->val;
        //newNode->neighbors = node->neighbors;

        for(Node* x: node->neighbors)
        {
            
            
                newNode->neighbors.push_back(cloneGraph(x));
                //cloneGraph(x);
            
        }
        return newNode;
    
    }
};