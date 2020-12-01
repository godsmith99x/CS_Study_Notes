#include <iostream>
#include <algorithm>

struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode *root);


int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->right->right->left = new TreeNode(8);
    root->right->left->right = new TreeNode(7);

    std::cout << "The maximum depth is: " << maxDepth(root) << std::endl;

    return 0;
}




//This is the Leetcode answer, the rest of the code is just to test this function

int maxDepth(TreeNode *root) 
{
    // Root being null means tree doesn't exist.
    if (root == NULL)
        return 0;
    
    // Get the depth of the left and right subtree using recursion.
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);

    // Choose the larger one and add the root to it.
    return std::max(leftDepth, rightDepth) + 1;      
}

