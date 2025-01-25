#include <iostream>
using namespace std;

// Define the structure of a node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Insert a new value into the BST
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value); // Create a new node if the tree is empty
    }

    if (value < root->data) {
        root->left = insert(root->left, value); // Insert into the left subtree
    } else {
        root->right = insert(root->right, value); // Insert into the right subtree
    }

    return root; // Return the unchanged root
}

// Search for a value in the BST
bool search(Node* root, int value) {
    if (root == nullptr) {
        return false; // Value not found
    }

    if (root->data == value) {
        return true; // Value found
    } else if (value < root->data) {
        return search(root->left, value); // Search in the left subtree
    } else {
        return search(root->right, value); // Search in the right subtree
    }
}

// Perform an inorder traversal (sorted order)
void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);        // Visit the left subtree
    cout << root->data << " "; // Visit the root
    inorder(root->right);       // Visit the right subtree
}

int main() {
    Node* root = nullptr; // Initialize an empty BST

    // Insert elements into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Perform an inorder traversal
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    // Search for elements in the BST
    int searchValue = 40;
    if (search(root, searchValue)) {
        cout << "Value " << searchValue << " found in the BST." << endl;
    } else {
        cout << "Value " << searchValue << " not found in the BST." << endl;
    }

    return 0;
}
