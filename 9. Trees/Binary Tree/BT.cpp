#include <bits/stdc++.h>
#include "Queue.hpp"
using namespace std;

class Tree
{
public:
    Node *root;
    Tree() { root = nullptr; }
    void createTree();
    void PreOrder(Node *p);
    void PostOrder(Node *p);
    void InOrder(Node *p);
    void LevelOrder(Node *p);
    int Height(Node *root);
};

void Tree::createTree()
{
    Node *p, *t;
    Queue q(100); // FIX: Properly initialize the queue with a size
    int x;

    cout << "Enter Root Value : ";
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.Enqueue(root);

    while (!q.isEmpty())
    {
        p = q.Dequeue();
        cout << "Enter Left Child of " << p->data << " : ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.Enqueue(t);
        }
        cout << "Enter Right Child of " << p->data << " : ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.Enqueue(t);
        }
    }
}

void Tree::PreOrder(Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        PreOrder(p->lchild);
        PreOrder(p->rchild);
    }
}

void Tree::InOrder(Node *p){
    if(p){
        InOrder(p->lchild);
        cout<<p->data<<" ";
        InOrder(p->rchild);
    }
}

void Tree::PostOrder(Node *p){
    if(p){
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        cout<<p->data<<" ";
    }
}

void Tree::LevelOrder(Node *p){
    if (!p) return; // Safety check for empty tree

    Queue q(100);
    cout << p->data << " ";
    q.Enqueue(p);
  
    while(!q.isEmpty()){
        Node* current = q.Dequeue(); // FIX: Use a local variable 'current' instead of overwriting 'root'
        if(current->lchild){
            cout << current->lchild->data << " ";
            q.Enqueue(current->lchild);
        }
        if(current->rchild){
            cout << current->rchild->data << " ";
            q.Enqueue(current->rchild);
        }
    }
    cout << endl;
}

int Tree::Height(Node *root){
    int x=0 , y=0;
    if(root==0)
        return 0;
    x = Height(root->lchild);
    y = Height(root->rchild);
    if(x>y){
        return x+1;
    }
    else 
        return y+1;
}

int main()
{
    Tree t;
    t.createTree();
    
    cout << "\nPreOrder Traversal: ";
    t.PreOrder(t.root);
    
    cout << "\nLevelOrder Traversal: ";
    t.LevelOrder(t.root);

    return 0;
}