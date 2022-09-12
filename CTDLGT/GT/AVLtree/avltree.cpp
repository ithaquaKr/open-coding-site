#include <iostream>

using namespace std;

struct node { //dinh nghia cau truc  node
  int data; //thanh phan du lieu cua node
  struct node * left; //thanh phan con tro cay con trai
  struct node * right; //thanh phan con tro cay con phai
  int height; //chieu cao cua node
};

class AVL_Tree { //bieu dien lop cay AVL_Tree
  public:
    node * root; //day la goc cua cay
  AVL_Tree(void) { //constructor cua lop
    root = NULL; //luc dau dat la NULL
  }
  int max(int a, int b); // tim so lon nhat trong hai so
  node * newNode(int value); //tao node roi rac co gia tri value
  int height(node * N); //lay chieu cao node N
  node * search(node * root, int value); //tim node co gia tri value
  node * rightRotate(node * y); //phep quay phai tai node y
  node * leftRotate(node * x); //quay trai tai node x
  int getBalance(node * N); //lay chi so can bang cua node
  node * insert(node * node, int data); //them node vao cay AVL
  node * deleteNode(node * root, int key); //xoa node tren cay AVL
  void preOrder(node * root); //duyet theo thu tu truoc
  void inOrder(node * root); //duyet theo thu tu giua
  void postOrder(node * root); //duyet theo thu tu sau
  node * minValueNode(node * root); //tim node co gia tri nho nhat
  void Function(void) { //ham dieu khien cac thao tac
  }
};
int AVL_Tree::max(int a, int b) { // tim so lon nhat trong hai so
  return (a > b) ? a : b;
}
int AVL_Tree::height(node * N) { //lay chieu cao node N
  if (N == NULL)
    return 0;
  return N -> height;
}
node * AVL_Tree::newNode(int value) { //tao node roi rac co gia tri value
  node * p = new node;
  p -> data = value;
  p -> left = NULL;
  p -> right = NULL;
  p -> height = 1;
  return (p);
}
node * AVL_Tree::search(node * root, int value) { //tim node co gia tri value
  if (root == NULL || root -> data == value)
    return root;
  if (root -> data < value)
    return search(root -> right, value);
  return search(root -> left, value);
}
node * AVL_Tree::rightRotate(node * y) { //phep quay phai tai node y
  node * x = y -> left; //x la node con trai cua y
  node * T2 = x -> right; //T2 la node con phai cua x

  x -> right = y; //node con phai cua x bay gio la y
  y -> left = T2; //node con trai cua y bay gio la T2
  // cap nhat lai chieu cao
  y -> height = max(height(y -> left), height(y -> right)) + 1;
  x -> height = max(height(x -> left), height(x -> right)) + 1;
  return x; //tra lai goc moi la x
}
node * AVL_Tree::leftRotate(node * x) { //quay trai tai node x
  node * y = x -> right; //y la node con phai cua x
  node * T2 = y -> left; //T2 la node con trai cua y
  //phep quay duocc thuc hien nhu duoi day
  y -> left = x; //node trai cua y bay gio la x
  x -> right = T2; //node phai cua x bay gio la T2
  // cap nhat lai chieu cao
  x -> height = max(height(x -> left), height(x -> right)) + 1;
  y -> height = max(height(y -> left), height(y -> right)) + 1;
  return y; //node goc moi la y
}
int AVL_Tree::getBalance(node * N) { //lay chi so can bang cua node
  if (N == NULL) //neu N la rong
    return 0; //chi so can bang la 0
  return height(N -> left) - height(N -> right); //hieu chieu cao hai cay con
}
node * AVL_Tree::insert(node * node, int data) { //them node vao cay AVL
  //Buoc 1. Thuc hien them node giong nhu cay tim kiem
  if (node == NULL)

    return (newNode(data));
  if (data < node -> data)
    node -> left = insert(node -> left, data);
  else
    node -> right = insert(node -> right, data);
  // Buoc 2. Cap nhat chieu cao cua cay
  node -> height = max(height(node -> left), height(node -> right)) + 1;
  //Buocc 3. Lay chi so can bang cua cay
  int balance = getBalance(node);
  // 4 truong hop lam cay mat can bang duoc xem xet
  //Truong hop a: Left-Left Case
  if (balance > 1 && data < node -> left -> data) //ta quay phai
    return rightRotate(node);
  // Truong hop b: Right Right Case
  if (balance < -1 && data > node -> right -> data) //ta quay trai
    return leftRotate(node);
  // Truong hop c: Left Right Case
  if (balance > 1 && data > node -> left -> data) {
    node -> left = leftRotate(node -> left); //quay trai truoc
    return rightRotate(node); // quay phai sau
  }
  // Truong hop d: Right Left Case
  if (balance < -1 && data < node -> right -> data) {
    node -> right = rightRotate(node -> right); //quay phai truoc
    return leftRotate(node); //quay trai sau
  }
  return node; //tra lai node
}
void AVL_Tree::preOrder(node * root) { //duyet theo thu tu truoc
  if (root != NULL) {
    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
  }
}
void AVL_Tree::inOrder(node * root) { //duyet theo thu tu giua
  if (root != NULL) {

    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
  }
}
void AVL_Tree::postOrder(node * root) { //duyet theo thu tu sau
  if (root != NULL) {
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
  }
}
node * AVL_Tree::minValueNode(node * root) { //tim node co gia tri Min
  node * current = root;
  while (current -> left != NULL) //quay trai lien tuc
    current = current -> left;
  return current; //node co gia tri Min
}
node * AVL_Tree::deleteNode(node * root, int key) { //Xoa node tren cay AVL
  //Buoc 1: Thuc hien Xoa node giong nhu cay tim kiem
  if (root == NULL) //neu cay rong
    return root;
  if (key < root -> data) //neu dieu nay xay ra
    root -> left = deleteNode(root -> left, key); //tim node sang ben trai
  else if (key > root -> data) //neu dieu nay xay ra
    root -> right = deleteNode(root -> right, key); //tim node sang ben ph?i
  else { //neu tim thay dung node gia tri key
    // neu node la la hoac co mot cay con
    if ((root -> left == NULL) || (root -> right == NULL)) {
      node * temp = root -> left ? root -> left : root -> right;

      if (temp == NULL) { //lay temp = NULL

        temp = root;
        root = NULL;
      } else // neu node chi co mot cay con
        *root = * temp; //thay the root bang temp
      free(temp); //giai phong temp

    } else { //truong hop node co hai cay con
      //lay node trai nhat cua cay con phai
      node * temp = minValueNode(root -> right);
      root -> data = temp -> data; //thay noi dung node hien tai
      // sau do loai bo node temp
      root -> right = deleteNode(root -> right, temp -> data);
    }
  }
  //Buoc2. Tim node lam cay mat can bang:
  if (root == NULL) //neu cay rong
    return root; //khong can can bang lai
  // Cap nhat chieu cao node
  root -> height = max(height(root -> left), height(root -> right)) + 1;
  // Buoc 3. Can bang cay
  int balance = getBalance(root);
  // 4 truong hop lam cay mat can bang duocc xem xet:
  //Truong hop a. Cay mat can bang trai (Left Left Case)
  if (balance > 1 && getBalance(root -> left) >= 0)
    return rightRotate(root); //ta quay phai
  // Truong hop b. Left Right Case
  if (balance > 1 && getBalance(root -> left) < 0) {
    root -> left = leftRotate(root -> left); //ta quay trai truoc
    return rightRotate(root); //roi quay phai sau
  }
  // Truong hop c. Right Right Case
  if (balance < -1 && getBalance(root -> right) <= 0)
    return leftRotate(root); //ta quay trai
  // Truong hop d. Right Left Case
  if (balance < -1 && getBalance(root -> right) > 0) {
    root -> right = rightRotate(root -> right); //quay phai truoc
    return leftRotate(root); //quay trai sau
  }
  return root;
}
//void AVL_Tree ::Function(void){ //ham dieu khien cac thao tac
////struct node *root = NULL;

int main() {

  AVL_Tree tree;
  node * tmp, * root = NULL;
  int data, choice;
  do {
    cout << "\n Cac thao tac tren cay AVL";
    cout << "\n 1. Them node vao cay AVL";
    cout << "\n 2. Loai node tren cay AVL";
    cout << "\n 3. Tim node tren cay AVL";
    cout << "\n 4. Duyet theo thu tu truoc";
    cout << "\n 5. Duyet theo thu tu giua";
    cout << "\n 6. Duyet theo thu tu sau";
    cout << "\n 0. Thoat khoi chuong trinh";
    cout << "\n Dua vao lua chon:";
    cin >> choice;
    switch (choice) {
    case 1:
      cout << "\n Gia tri node can them:";
      cin >> data;
      root = tree.insert(root, data);
      break;
    case 2:
      cout << "\n Gia tri node can loai:";
      cin >> data;
      root = tree.deleteNode(root, data);
      break;
    case 3:
      cout << "\n Gia tri node can tim:";
      cin >> data;
      tmp = tree.search(root, data);
      if (tmp == NULL) cout << "\n Node khong co tren cay";
      else cout << "\n Node: " << tmp -> data << " co tren cay";
      break;
    case 4:
      tree.preOrder(root);
      break;
    case 5:
      tree.inOrder(root);
      break;
    case 6:
      tree.postOrder(root);
      break;
    default:
      if (choice != 0) cout << "\n Lua chon sai";
      break;
    }
    cout << "\n Duyet truoc: ";
    tree.preOrder(root);
    cout << "\n Duyet giua: ";
    tree.inOrder(root);
    cout << "\n Duyet sau: ";
    tree.postOrder(root);
  } while (choice != 0);

}
//int main(void){
//AVL_Tree X;
//X.Function();
//}




