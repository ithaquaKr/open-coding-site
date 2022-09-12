#include <bits/stdc++.h>
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

Node * lca(Node * root, int v1,int v2)
{
    if(root == nullptr) return nullptr;
    int data = root->data;
    if(v1 < data && v2 < data) return lca(root->left, v1, v2);
    if(v1 > data && v2 > data) return lca(root->right, v1, v2);
    return root;
}

}; 

int main() {
  
    Tree myTree;
    Node* root = NULL;
    
    int t;
    int data;

    cin >> t;

    while(t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    
    int v1, v2;
    cin >> v1 >> v2;
  
    Node *ans = myTree.lca(root, v1, v2);
    
    cout << ans->data;
    cout << endl;
    return 0;
}