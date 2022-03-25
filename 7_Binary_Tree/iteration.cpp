#include <bits/stdc++.h>

using namespace std;

//-- Tree Node Defination
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//-- Pre-order
void preOrderTraversal(TreeNode* currentNode, vector<int>& array)
{
    stack<TreeNode*> nodeStack;
    TreeNode* tmpNode;

    nodeStack.push(currentNode);
    while (!nodeStack.empty())
    {
        tmpNode = nodeStack.top();
        nodeStack.pop();

        array.push_back(tmpNode->val);
        if (tmpNode->right) { nodeStack.push(tmpNode->right); }
        if (tmpNode->left ) { nodeStack.push(tmpNode->left ); }
    }
}

//-- In-order
void inOrderTraversal(TreeNode* currentNode, vector<int>& array)
{
    stack<TreeNode*> nodeStack;
    TreeNode* tmpNode;

    nodeStack.push(currentNode);
    tmpNode = nodeStack.top();
    while (!nodeStack.empty())
    {
        if (tmpNode != nullptr)
        {
            nodeStack.push(tmpNode);
            tmpNode = tmpNode->left;
        }
        else
        {
            
            array.push_back(nodeStack.top()->val);
            tmpNode = tmpNode->right;
        }
    }
}

int main(void)
{
    vector<int> treeArray = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
    int num = treeArray.size();

    // New RAM
    vector<TreeNode*> nodes;
    for (int i = 0; i < num; i++)
    {
        TreeNode* node = new TreeNode();
        nodes.push_back(node);
    }

    // Construct binary tree
    for (int i = 0; i < num ; i++)
    {
        nodes[i] -> val = treeArray[i];
        if (i * 2 + 1 < num) { nodes[i] -> left  = nodes[i * 2 + 1]; }
        if (i * 2 + 2 < num) { nodes[i] -> right = nodes[i * 2 + 2]; }
    }

    vector<int> result;
    inOrderTraversal(nodes[0], result);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}