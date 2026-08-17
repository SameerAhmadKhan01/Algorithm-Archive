#include <iostream>
#include <stack>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST
{
protected:
    TreeNode *root = nullptr;

public:
    void Insert(int val)
    {
        TreeNode *tmp = new TreeNode(val);
        if (root == nullptr)
        {
            root = tmp;
            return;
        }
        TreeNode *fast = root;
        TreeNode *slow = nullptr;
        while (fast != nullptr)
        {
            slow = fast;
            if (val == fast->data)
            {
                delete tmp;
                return;
            }
            else if (val < fast->data)
            {
                fast = fast->left;
            }
            else
            {
                fast = fast->right;
            }
        }
        if (val < slow->data)
        {
            slow->left = tmp;
        }
        else
        {
            slow->right = tmp;
        }
    }

    void InorderTraversal()
    {
        stack<TreeNode *> stk;
        TreeNode *p = root;
        while (p != nullptr || !stk.empty())
        {
            if (p != nullptr)
            {
                stk.emplace(p);
                p = p->left;
            }
            else
            {
                p = stk.top();
                stk.pop();
                cout << p->data << ", " << flush;
                p = p->right;
            }
        }
        cout << endl;
    }

    TreeNode *Search(int key)
    {
        TreeNode *t = root;
        while (t != nullptr)
        {
            if (key == t->data)
            {
                return t;
            }
            else if (key < t->data)
            {
                t = t->left;
            }
            else
            {
                t = t->right;
            }
        }
        return nullptr;
    }
};

int main()
{
    BST tree;
    tree.Insert(10);
    tree.Insert(5);
    tree.Insert(15);
    tree.InorderTraversal();
    TreeNode *loc = tree.Search(67);
    if (loc)
        cout << "SEARCH SUCCESFULL:)";
    else
        cout << "NOT FOUND :/";
    return 0;
}
