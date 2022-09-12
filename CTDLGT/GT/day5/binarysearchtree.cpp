// Binary Tree in C++

#include <bits/stdc++.h>
using namespace std;

int arr[5], k=0;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// New node creation
struct node *newNode(int data) {
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->data = data;

    node->left = NULL;
    node->right = NULL;
    return (node);
}

// Traverse Inorder
void traverseInOrder(struct node *temp) {
    if (temp != NULL) {
        traverseInOrder(temp->left);
        cout << " " << temp->data;
        arr[k] = temp->data;
        k++;
        traverseInOrder(temp->right);
    }
}

void arrayToBST(int* arr, struct node* root, int* index_ptr)
{
    // Base Case
    if (root == NULL)
        return;

    /* first update the left subtree */
    arrayToBST(arr, root->left, index_ptr);

    /* Now update root's data and increment index */
    root->data = arr[*index_ptr];
    (*index_ptr)++;

    /* finally update the right subtree */
    arrayToBST(arr, root->right, index_ptr);
}

void convertBST(struct node *temp) {
    int i = 0;
    arrayToBST(arr,temp,&i);
}

int main() {
    struct node *root = newNode(10);
    struct node *leave1 = newNode(2);
    struct node *leave2 = newNode(4);
    struct node *leave3 = newNode(8);
    struct node *leave4 = newNode(7);
    root->left = leave1;
    root->right = leave4;
    leave1->left = leave3;
    leave1->right = leave2;

    cout << "\nInorder traversal: "<< endl;;
    traverseInOrder(root);
    cout << endl;
    cout << "temp" << endl;
    sort(arr, arr+5);
    for(int i=0; i<5;i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
    convertBST(root);

    cout << endl;
    cout << "\nInorder traversal: "<< endl;;
    traverseInOrder(root);
}