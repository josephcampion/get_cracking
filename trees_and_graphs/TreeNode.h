
#ifndef TREE_NODE_H
#define TREE_NODE_H

// #include <vector>

class TreeNode
{
public:
    TreeNode(int d);
    addNode(TreeNode* tree_node);

private:
    TreeNode* left;
    TreeNode* right;
    TreeNode* parent;
    int data;
    
};

#endif // TREE_NODE_H