/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

***********************************************************/
void inorder(BinaryTreeNode<int> *root, int &cnt)
{
    // LNR
    // base case
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, cnt);
    //     cout << root->data << " ";
    if (root->left == NULL && root->right == NULL)
    {
        cnt++;
    }
    inorder(root->right, cnt);
}

int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    // Write your code here.
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}