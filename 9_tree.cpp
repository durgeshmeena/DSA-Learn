#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) {
        this->data = data;
    }
};

void printTree(TreeNode<int>* root) {
    cout << root->data << ": ";
    for (int i = 0; i < root->children.size(); i++)
        cout << root->children[i]->data << " ";
    cout << "\n";
    for (int i = 0; i < root->children.size(); i++)
        printTree(root->children[i]);
}

TreeNode<int>* inputTree() {
    cout << "Enter data" << "\n";
    int data;
    cin >> data;
    TreeNode<int>* root = new TreeNode<int>(data);
    cout << "Enter no. of children of node " << data << "\n";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        TreeNode<int>* node = inputTree();
        root->children.push_back(node);

    }

    return root;


}
// fuction which take input for tree in same level order and return root of the tree
// TreeNode<int>* inputTreeLevelOrder() {
//     cout << "Enter data" << "\n";
//     int data;
//     cin >> data;
//     TreeNode<int>* root = new TreeNode<int>(data);
//     cout << "Enter no. of children of node " << data << "\n";
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         TreeNode<int>* node = inputTreeLevelOrder();
//         root->children.push_back(node);

//     }

//     return root;


TreeNode<int>* inputTreeLevel() {
    cout << "Enput data" << "\n";
    int data;
    cin >> data;
    TreeNode<int>* node = new TreeNode<int>(data);

    cout << "Enter number of children of " << node->data << "\n";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "enter " << i+1 << " child of " << data << "\n";
        int cdata;
        cin >> cdata;
        TreeNode<int>* child = new TreeNode<int>(cdata);
        child->data = cdata;
        node->children.push_back(child);
    }

    for (int j = 0; j < node->children.size(); j++)
    {
        TreeNode<int>* child = node->children[j];
        cout << "Enter number of children of " << child->data << "\n";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "enter " << i+1 << " child of " << child->data << "\n";
            int cdata;
            cin >> cdata;
            TreeNode<int>* cchild = new TreeNode<int>(cdata);
            child->data = cdata;
            child->children.push_back(cchild);
        }
    }
    return node;



}

void deleteTree(TreeNode<int>* root) {
    for (int i = 0; i < root->children.size(); i++)
        deleteTree(root->children[i]);
    delete root;
}

int main() {
    cout << "\n\n" << "######################################" << "\n";

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* node1 = new TreeNode<int>(2);
    // TreeNode<int>* node2 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);

    TreeNode<int>* root = inputTree();

    printTree(root);
    cout << "\n" << "Done" << "\n";

    deleteTree(root);

    cout << "\n" << "Tree deleted" << "\n";



    cout << "\n\n" << "######################################" << "\n";
    return 0;
}
