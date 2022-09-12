// AVL tree implementation in C++

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Tree {
    public:
        Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

     int height(Node* root) {
        int leftHeight=-1,rightHeight=-1;
        if(root->left){
            leftHeight=height(root->left);
        }
        if(root->right)
            rightHeight=height(root->right);
        return max(leftHeight,rightHeight)+1;
    }

}; 


int main() {
    Node *root = NULL;
    Tree myTree;
    int n,x; cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        root = myTree.insert(root,x);
    }
    int height = myTree.height(root);
    cout << height << endl;
}