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

// RETURNS HEIGHT OF THE TREE
int Height(TreeNode *root)
{
    if (root == nullptr)
        return 0;
    return 1 + max(Height(root->leftChild), Height(root->rightChild));
}

// RETURNS INORDER PREDECESSOR
TreeNode *InPre(TreeNode *root)
{
    while (root && root->rightChild != nullptr)
        root = root->rightChild;
    return root;
}

// RETURNS INORDER SUCCESSOR
TreeNode *InSucc(TreeNode *root)
{
    while (root && root->leftChild != nullptr)
        root = root->leftChild;
    return root;
}

TreeNode *Delete(TreeNode *root, int key)
{

    if (root == nullptr)
        return nullptr;

    if (root->leftChild == nullptr && root->rightChild == nullptr)
    {
        if (root->data == key)
        {
            delete root;
            return nullptr;
        }
        return root;
    }

    TreeNode *q;
    if (key < root->data)
    {
        root->leftChild  = Delete(root->leftChild, key);
    }
    else if (key > root->data)
    {
        root->rightChild = Delete(root->rightChild, key);
    }
    else
    {
        if (Height(root->leftChild) > Height(root->rightChild))
        {
            q = InPre(root->leftChild);
            root->data = q->data;
            root->leftChild = Delete(root->leftChild, q->data);
        }
        else
        {
            q = InSucc(root->rightChild);
            root->data = q->data;
            root->rightChild = Delete(root->rightChild, q->data);
        }
    }
}

int main()
{
    TreeNode *root = nullptr;

    // Insert nodes
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Original tree (Inorder): ";
    inorder(root);
    cout << "\n";

    // 1. Delete a leaf node (20)
    cout << "\nDeleting leaf node 20...\n";
    root = Delete(root, 20);
    cout << "Inorder: ";
    inorder(root);
    cout << "\n";

    // 2. Delete a node with one child / two children (30)
    cout << "\nDeleting node 30...\n";
    root = Delete(root, 30);
    cout << "Inorder: ";
    inorder(root);
    cout << "\n";

    // 3. Delete the root node (50)
    cout << "\nDeleting root node 50...\n";
    root = Delete(root, 50);
    cout << "Inorder: ";
    inorder(root);
    cout << "\n";

    return 0;
}