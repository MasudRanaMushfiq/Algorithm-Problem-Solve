#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (!root) return createNode(value);
    if (value < root->value) root->left = insert(root->left, value);
    else if (value > root->value) root->right = insert(root->right, value);
    return root;
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->value << " ";
        inorder(root->right);
    }
}

bool search(Node* root, int value) {
    if (!root) return false;
    if (root->value == value) return true;
    if (value < root->value) return search(root->left, value);
    return search(root->right, value);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    inorder(root);
    cout << endl;

    cout << (search(root, 40) ? "Found" : "Not Found") << endl;
    cout << (search(root, 25) ? "Found" : "Not Found") << endl;

    return 0;
}
