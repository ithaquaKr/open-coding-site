#include<bits/stdc++.h>
using namespace std;
struct node { // biểu diễn node
    int data; //thành phần thông tin của node
    node *next; //thành phần con trỏ của node
}; // danh sách liên kết đơn: *start.
 
node* CreateNode(int value){
    struct node* temp;
    temp = new(struct node);
    temp->data = value;
    temp->next = NULL;
    return temp;
}

int main()
{
    
    return 0;
}