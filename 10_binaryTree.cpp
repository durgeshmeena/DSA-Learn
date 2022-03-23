#include<iostream>
#include<vector>
using namespace std;

template <typename T>
struct BinaryTreeNode {
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

    ~BinaryTreeNode() {
        delete left;
        delete right;
    }

};

// template <typename T>
BinaryTreeNode<int>* inputBinaryTree() {
    cout << "Enter data" << endl;
    int data;
    cin >> data;
    if (data == -1)
        return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(data);
    BinaryTreeNode<int>* leftNode = inputBinaryTree();
    BinaryTreeNode<int>* rightNode = inputBinaryTree();
    root->left = leftNode; 
    root->right = rightNode;

    return root;  
}

void printPreorder(BinaryTreeNode<int>* root) {
    if (root == NULL)
        return;
    cout << root->data << endl;
    if (root->left)
        printPreorder(root->left);
    if (root->right)
        printPreorder(root->right);    

}





int main() { cout << endl << endl << "######################################"<< endl << endl;

    BinaryTreeNode<int>* root = inputBinaryTree();
    printPreorder(root);
    


    cout << endl << "######################################";
    return 0;
}