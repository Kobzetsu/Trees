#include <bits/stdc++.h>
using namespace std;
 

struct Node {
    int data;
    struct Node *left, *right;
};
 
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// Preorder visits
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    cout << node->data << " ";
 
    printPreorder(node->left);
 
    printPreorder(node->right);
}

// Inorder visits
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    printInorder(node->left);
 
    cout << node->data << " ";
 
    printInorder(node->right);
}
 
// Postorder visits
void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    printPostorder(node->left);
 
    printPostorder(node->right);
 
    cout << node->data << " ";
}

int main()
{
    return 0;
}
