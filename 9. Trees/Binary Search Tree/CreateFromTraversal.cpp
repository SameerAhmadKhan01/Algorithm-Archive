#include <iostream>
#include <stack>
#include <vector>
#include <climits>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
} *root = nullptr;

// CREATING A BST FROM PRE-ORDER TRAVERSAL
void createPre(vector<int> &Pre)
{
    int i = 0;
    root = new TreeNode(Pre[i++]);
    TreeNode *tmp, *p = root;
    stack<TreeNode *> stk;
    while (i < Pre.size())
    {
        // for left child
        if (Pre[i] < p->data)
        {
            tmp = new TreeNode(Pre[i++]);
            stk.push(p);
            p->left = tmp;
            p = tmp;
        }
        else
        {
            // base for right child if it lies between the current node and the pushed node to stack!
            if (Pre[i] > p->data && stk.empty() ? INT_MAX : stk.top()->data > Pre[i])
            {
                tmp = new TreeNode(Pre[i++]);
                p->right = tmp;
                p = tmp;
            }
            else
            {
                p = stk.top();
                stk.pop();
            }
        }
    }
}

// CREATING A TREE FROM POSTORDER TRAVERSAL
void createPost(const vector<int> &Post)
{
    if (Post.empty())
        return;

    int i = Post.size() - 1;
    root = new TreeNode(Post[i--]);
    TreeNode *tmp, *p = root;
    stack<TreeNode *> stk;

    while (i >= 0)
    {
        // 1. Right child check comes first
        if (Post[i] > p->data)
        {
            tmp = new TreeNode(Post[i--]);
            stk.push(p);
            p->right = tmp; // Attach to the right
            p = tmp;
        }
        // 2. Left child check with lower limit
        else
        {
            int lowerLimit = stk.empty() ? INT_MIN : stk.top()->data;

            if (Post[i] < p->data && Post[i] > lowerLimit)
            {
                tmp = new TreeNode(Post[i--]);
                p->left = tmp;
                p = tmp;
            }
            else
            {
                p = stk.top();
                stk.pop();
            }
        }
    }
}
void inorder(TreeNode *node)
{
    if (!node)
        return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

int main()
{
    vector<int> preorder = {30, 20, 10, 15, 25, 40, 50, 45};

    cout << "Given Preorder: ";
    for (int val : preorder)
    {
        cout << val << " ";
    }
    cout << "\n";

    createPre(preorder);

    cout << "Inorder Traversal of constructed BST: ";
    inorder(root);
    cout << "\n";

    return 0;
}