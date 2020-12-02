#include <iostream>
#include <algorithm>

//struct provided by Leetcode
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
    //builds a tree to test on
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->right->right->left = new TreeNode(8);
    root->right->left->right = new TreeNode(7);

                                            //function call to get max depth
    std::cout << "The maximum depth is: " << maxDepth(root) << std::endl;

    return 0;
}




//This is the Leetcode answer, the rest of the code is just to test this function

int maxDepth(TreeNode *root) 
{
    // Root being null means node doesn't exist.
    if (root == NULL)
    {
        return 0;
    } else
    {
        // Get the depth of the left and right subtree using recursion.
                                //dereferences the left pointer to retrieve its value and assign it to maxDepth() as root
        int leftDepth = maxDepth(root->left);
                                //does the same on the right side of any node
        int rightDepth = maxDepth(root->right);

        // looks at the left and right branch, sees which is larger, adds one to increment
        //when you get to the bottom of the branch, the node will point to NULL, returning 0, so you will get 0 + 1 and the recursion will unwind
        return std::max(leftDepth, rightDepth) + 1;
    }
          
}

