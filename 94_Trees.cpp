// Tree is a non-linear DS

// Important terms in trees
// 1) Node
// 2) Root (top Node)
// 3) Children
// 4) Parent
// 5) Sibling (same parents)
// 6) Ancestor  (node ke uppr wali saari nodes)
// 7) Descendend (node ke neche wali saari nodes)
// 8) Leaf (Last Node i.e. no child)

// Binary Tree will always has <=2 child nodes
// reverse Level order traversal  (Homework)

// Inorder - LNR
// Preorder - NLR
// Postorder - LRN
#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left " << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right " << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrdeTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    // q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

void inorder(node *root)
{
    // LNR
    // base case
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    // NLR
    // base case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    // LRN
    // base case
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node *root)
{
    queue<node *> q;
    cout << "Enter data for root" << endl;
    int data;
    cin >> data;

    root = new node(data);

    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        cout << "Enter right node for: " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;
    // creating a tree
    // root = buildTree(root);

    // // level order tranversal
    // levelOrdeTraversal(root);

    // cout << endl;
    // cout << endl;

    // inorder(root);

    // cout << endl;
    // cout << endl;

    // preorder(root);
    // cout << endl;
    // cout << endl;

    // postorder(root);

    buildFromLevelOrder(root);
    levelOrdeTraversal(root);

    return 0;
}

// data - 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1