#include <iostream>
using namespace std;

// Node structure
struct Node
{
    Node *left;
    int data;
    Node *right;
    Node() : data(0), left(nullptr), right(nullptr) {}
    Node(int data) : data(this->data), left(nullptr), right(nullptr) {}
};

// Recursive Function to search in a binary tree
Node *Rsearch(Node *t, int key)
{
    if (t == nullptr)
        return nullptr;
    else if (t->data == key)
        return t;
    else if (key > t->data)
        return Rsearch(t->right, key);
    else
        return Rsearch(t->left, key);
}

// Iterative Solution
Node *SearchInBST(Node *t, int val)
{
    while (t != nullptr)
    {
        if (t->data == val)
            return t;
        else if (t->data > val)
            t = t->left;
        else
            t = t->right;
    }
    return NULL;
}