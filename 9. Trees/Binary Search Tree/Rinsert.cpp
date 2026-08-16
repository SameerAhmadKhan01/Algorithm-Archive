#include <iostream>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *leftChild;
    TreeNode *rightChild;
    TreeNode(int data) : data(data), leftChild(nullptr), rightChild(nullptr) {}
};

TreeNode *insert(TreeNode *root, int val)
{
    if (root == nullptr)
    {
        return new TreeNode(val);
    }
    if (val < root->data)
    {
        root->leftChild = insert(root->leftChild, val);
    }
    else if (val > root->data)
    {
        root->rightChild = insert(root->rightChild, val);
    }
    return root;
}

void inorder(TreeNode *root)
{
    if (root == nullptr)
        return;
    inorder(root->leftChild);
    cout << root->data << " ";
    inorder(root->rightChild);
}

int main()
{
    TreeNode *root = new TreeNode(10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 3);
    inorder(root);
    return 0;
}