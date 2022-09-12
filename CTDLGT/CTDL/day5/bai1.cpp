#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    node *next;
    node *prev;
}* start;

node* create_node(char value)
{
    struct node *s, *temp;  //Tao 2 con tro s va temp
    temp = new(struct node); 
    temp->data = value;
    temp->next = NULL;
    if(start == NULL){
        temp->prev = NULL;
        start = temp;
    }
    else{
        s = start;
        while(s->next!=NULL)
            s = s->next;
        s->next = temp;
        temp->prev = s;
    }
}
void add_begin(int value)
{
    if (start == NULL){ //Nếu danh sách rỗng
        cout << "nothing" << endl;
        return;
    }
    struct node *temp; //Sử dụng con trỏ temp
    temp = new(struct node); //Cấp phát miền nhớ cho temp
    temp->prev = NULL; //temp->prev được thiết lập là Null
    temp->data = value; //Thiết lập thông tin cho temp
    temp->next = start; // temp->next là start
    start->prev = temp; //start->prev là temp.
    start = temp; //Node đầu tiên bây giờ là temp
    cout << "Da them node" << endl;
    }

void display_dlist(){//Hiển thị nội dung danh sách
    struct node *q;
    if (start == NULL){ //Nếu danh sách rỗng
        cout<<"Không có gì để hiển thị"<<endl;
        return;
    }
    q = start; //Đặt q là node đầu tiên trong danh sách
    cout<<"Nội dung danh sách liên kết kép :"<<endl;
    while (q != NULL){ //Lặp cho đến node cuối cùng
        cout<<q->data<<" <-> "; //Hiển thị thông tin node
        q = q->next; //q trỏ đến node tiếp theo
    }
    cout<<"NULL"<<endl;
}
int main()
{
    create_node('b');
    create_node('c');
    create_node('e');
    add_begin('f');
    display_dlist();
    return 0;
}