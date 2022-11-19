#include <iostream>
#include <vector>

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


int main() {
    
    // Level 1
    Node* root = createNode(1);
    // Level 2
    root->left = createNode(2);
    root->right = createNode(3);
    // Level 3
    root->left->left = createNode(4);

    return 0;
}



