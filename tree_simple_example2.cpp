#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using std::cin;
using std::cout;
using std::vector;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
   Node* newNode = new Node();
   newNode->data = data;
   newNode->left = newNode->right = nullptr;
   return newNode;
}

void printTree(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << '\n';
    printTree(root->left);
    printTree(root->right);
}


int main() {

    // Level 1
    Node* root = createNode(1);
    // Level 2
    root->left = createNode(2);
    root->right = createNode(3);
    // Level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printTree(root);

    return 0;
}



