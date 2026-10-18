#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    struct TreeNode *left;
    int data;
    int height;
    struct TreeNode *right;
    TreeNode(int d, int h) : left(nullptr), right(nullptr), data(d), height(h) {}
} *root = NULL;

// FINDING THE HEIGHT OF A NODE
int NodeHeight(struct TreeNode *p)
{
    int hl, hr;
    hl = p && p->left ? p->left->height : 0;
    hr = p && p->right ? p->right->height : 0;

    return hl > hr ? hl + 1 : hr + 1;
}

int balanceFactor(struct TreeNode *p)
{
    int hl, hr;
    hl = p && p->left ? p->left->height : 0;
    hr = p && p->right ? p->right->height : 0;

    return hl - hr;
}

struct TreeNode *RRRotation(struct TreeNode *p) { return NULL; }
struct TreeNode *RLRotation(struct TreeNode *p) { return NULL; }

//function to perform LL roation
struct TreeNode *LLRotation(struct TreeNode *p)
{
    struct TreeNode *pl = p->left;
    struct TreeNode *plr = pl->right;
    pl->right = p;
    p->left = plr;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);

    if (root == p)
        root = pl;

    return pl;
}

//Function to perform LR rotation
TreeNode* LRRotation(TreeNode *p){
    TreeNode *pl = p->left;
    TreeNode *plr = p->right;

    pl->right = plr->left;
    plr->left = plr->right;

    plr->left = pl;
    plr->right = p;

    pl->height = NodeHeight(pl);
    p->height = NodeHeight(p);
    plr->height = NodeHeight(plr);

    if(root==p) root = plr;

    return plr;

}

// RECURSIVE INSERT IN A BST
TreeNode *Rinsert(TreeNode *root, int val)
{
    if (root == nullptr)
    {
        return new TreeNode(val, 1);
    }
    if (val < root->data)
    {
        root->left = Rinsert(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = Rinsert(root->right, val);
    }

    root->height = NodeHeight(root);

    if (balanceFactor(root) == 2 && balanceFactor(root->left) == 1)
    {
        return LLRotation(root);
    }
    else if (balanceFactor(root) == 2 && balanceFactor(root->left) == -1)
    {
        return LRRotation(root);
    }
    else if (balanceFactor(root) == -2 && balanceFactor(root->left) == -1)
    {
        return RRRotation(root);
    }
    else if (balanceFactor(root) == -2 && balanceFactor(root->left) == 1)
    {
        return RLRotation(root);
    }

    return root;
}


void inorder(TreeNode *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    root = Rinsert(root , 10);
    Rinsert(root,5);
    Rinsert(root,2);
    inorder(root);
}