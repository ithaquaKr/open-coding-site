// Binary Tree in C++

#include <bits/stdc++.h>
using namespace std;

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

// Traverse Preorder
void traversePreOrder(struct node *temp) {
  if (temp != NULL) {
    cout << " " << temp->data;
    traversePreOrder(temp->left);
    traversePreOrder(temp->right);
  }
}

// Traverse Inorder
void traverseInOrder(struct node *temp) {
  if (temp != NULL) {
    traverseInOrder(temp->left);
    cout << " " << temp->data;
    traverseInOrder(temp->right);
  }
}

// Traverse Postorder
void traversePostOrder(struct node *temp) {
  if (temp != NULL) {
    traversePostOrder(temp->left);
    traversePostOrder(temp->right);
    cout << " " << temp->data;
  }
}

set<node*> s;
stack<node*> st;
 
// Function to build tree using given traversal
node* buildTree(int preorder[], int inorder[],int n)
{
    node* root = NULL;
    for (int pre = 0, in = 0; pre < n;)
    {
        node* Treenode = NULL;
        do
        {
            Treenode = newNode(preorder[pre]);
            if (root == NULL)
            {
                root = Treenode;
            }
            if (st.size() > 0)
            {                                               
                if (s.find(st.top()) != s.end())
                {
                    s.erase(st.top());
                    st.top()->right = Treenode;
                    st.pop();
                }
                else
                {
                    st.top()->left = Treenode;
                }
            }
            st.push(Treenode);
        } while (preorder[pre++] != inorder[in] && pre < n);
 
        Treenode = NULL;
        while (st.size() > 0 && in < n &&
                st.top()->data == inorder[in])
        {
            Treenode = st.top();
            st.pop();
            in++;
        }
 
        if (Treenode != NULL)
        {
            s.insert(Treenode);
            st.push(Treenode);
        }
    }
 
    return root;
}

int main() {
//   struct node *root = newNode(25);
//   struct node *leave1 = newNode(15);
//   struct node *leave2 = newNode(50);
//   struct node *leave3 = newNode(10);
//   struct node *leave4 = newNode(22);
//   struct node *leave5 = newNode(35);
//   struct node *leave6 = newNode(70);
//   root->left = leave1;
//   root->right = leave2;
//   leave1->left = leave3;
//   leave1->right = leave4;
//   leave2->left = leave5;
//   leave2->right=leave6;
//   leave3->left = newNode(4);
//   leave3->right = newNode(12);
//   leave4->left = newNode(18);
//   leave4->right = newNode(24);
//   leave5->left = newNode(31);
//   leave5->right = newNode(44);
//   leave6->left = newNode(66);
//   leave6->right = newNode(90);
  int in[] = {4, 10, 12, 15, 18, 22, 24, 25, 31, 35, 44, 50, 66, 70, 90};
  int pre[] = {25, 15, 10, 4, 12, 22, 18, 24, 50, 35, 31, 44, 70, 66, 90};  
  int len = sizeof(in)/sizeof(int);

  node *root = buildTree(pre, in, len);

  cout << "preorder traversal: " << endl;
  traversePreOrder(root);
  cout << "\nInorder traversal: "<< endl;;
  traverseInOrder(root);
  cout << "\nPostorder traversal: " << endl;
  traversePostOrder(root);
  cout << endl;
}