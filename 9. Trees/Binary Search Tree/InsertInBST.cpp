#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    TreeNode *left;
    int data;
    TreeNode *right;
    TreeNode() : left(nullptr), right(nullptr), data(0) {}
    TreeNode(int val) : left(nullptr), right(nullptr), data(val) {}
};

class BST
{
public:
    TreeNode *root;

    //  FUNCTION TO CREATE A TREE
    void Create()
    {
        queue<TreeNode *> q;
        TreeNode *p, *t;
        int x;
        cout << "Enter Root Value :" << endl;
        cin >> x;
        root = new TreeNode;
        root->data = x;
        root->left = root->right = nullptr;
        q.emplace(root);
        while (!q.empty())
        {
            p = q.front();
            q.pop();
            cout << "Enter Left Child of " << p->data << endl;
            cin >> x;
            if (x != -1)
            {
                t = new TreeNode;
                t->data = x;
                t->left = t->right = nullptr;
                p->left = t;
                q.emplace(t);
            }
            cout << "Enter Right Child of " << p->data << endl;
            cin >> x;
            if (x != -1)
            {
                t = new TreeNode;
                t->data = x;
                t->left = t->right = nullptr;
                p->right = t;
                q.emplace(t);
            }
        }
    }

    // FUNCTION TO DISPLAY TREE ELEMENTS IN A INORDER FASHION
    void displayInorder(TreeNode *p)
    {
        if (p == nullptr)
            return;
        displayInorder(p->left);
        cout << p->data << " ";
        displayInorder(p->right);
    }

    // FUNCTION TO DISPLAY TREE ELEMENTS IN A PREORDER FASHION
    void displayPreOrder(TreeNode *p)
    {
        if (p == nullptr)
            return;
        cout << p->data << " ";
        displayInorder(p->left);
        displayInorder(p->right);
    }

    // FUNCTION TO DISPLAY TREE ELEMENTS IN A POSTORDER FASHION
    void displayPostOrder(TreeNode *p)
    {
        if (p == nullptr)
            return;
        displayInorder(p->left);
        displayInorder(p->right);
        cout << p->data << " ";
    }

    // TO RETURN THE ADDRESS OF A SEARCHED ELEMENT IN THE KEY
    TreeNode *Search(TreeNode *p, int key)
    {
        while (p != nullptr)
        {
            if (p->data == key)
                return p;
            else if (p->data < key)
                p = p->right;
            else
                p = p->left;
        }
        return NULL;
    }

    // FUNCTION TO INSERT AN ELEMENT IN THE TREE
    void Insert(int value)
    {
        TreeNode *tmp = new TreeNode(value);
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
            if (value == fast->data)
            {
                delete tmp;
                return;
            }
            else if (value < fast->data)
            {
                fast = fast->left;
            }
            else
            {
                fast = fast->right;
            }
        }
        if (value < slow->data)
        {
            slow->left = tmp;
        }
        else
        {
            slow->right = tmp;
        }
    }
};

int main()
{
    BST tree;
    int choice, val;

    cout << "=== Binary Search Tree Operations ===" << endl;
    cout << "1. Create Tree Level-by-Level (Queue implementation)\n";
    cout << "2. Insert an Element\n";
    cout << "3. Display Inorder Traversal\n";
    cout << "4. Display Preorder Traversal\n";
    cout << "5. Display Postorder Traversal\n";
    cout << "6. Search for an Element\n";
    cout << "7. Exit\n";

    while (true)
    {
        cout << "\n-------------------------------------\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            tree.Create();
            break;

        case 2:
            cout << "Enter value to insert: ";
            cin >> val;
            tree.Insert(val);
            cout << val << " inserted successfully (if it wasn't a duplicate).\n";
            break;

        case 3:
            cout << "Inorder Traversal: ";
            tree.displayInorder(tree.root);
            cout << endl;
            break;

        case 4:
            cout << "Preorder Traversal: ";
            tree.displayPreOrder(tree.root);
            cout << endl;
            break;

        case 5:
            cout << "Postorder Traversal: ";
            tree.displayPostOrder(tree.root);
            cout << endl;
            break;

        case 6:
            cout << "Enter element to search: ";
            cin >> val;
            if (tree.Search(tree.root, val) != nullptr)
            {
                cout << "Element " << val << " found in the tree address: " << tree.Search(tree.root, val) << "\n";
            }
            else
            {
                cout << "Element " << val << " NOT found in the tree.\n";
            }
            break;

        case 7:
            cout << "Exiting program. Goodbye!\n";
            return 0;

        default:
            cout << "Invalid choice! Please select a valid option.\n";
        }
    }

    return 0;
}


