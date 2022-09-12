#include<bits/stdc++.h>
using namespace std;

struct node {
    int info;
    struct node *next;
} *start;

class single__llist {
    public:
        node* create_node(int); //Tao 1 node
        void insert_begin(); //them node vao dau ds

        single__llist(){ //Constructor
            start=NULL;
        }
};
node* single__llist::create_node(int value){
    struct node *temp; //Khai báo hai con trỏ node *temp
    temp = new(struct node); //Cấp phát miền nhớ cho temp
    if (temp == NULL){ //Nếu không đủ không gian nhớ
        cout<< 'Khong du bo nho ' << endl;
        return 0;
    }
    else {
        temp->info = value;//Thiết lập thông tin cho node temp
        temp->next = NULL; //Thiết lập liên kết cho node temp
        return temp;//Trả lại node temp đã được thiết lập
    }
}
void single_llist::insert_begin(void){
    int value;
    cout << "Nhap gia tri" << " \t"; cin >> value;
    struct node *temp, *p;
    temp = create_node(value); //Tao node gia tri value
    if(start = NULL)
    {
        start = temp;
        start -> next = NULL;
    }
    else {
        p = start;
        start = temp;
        start -> next = p;
    }
    cout << "done" << endl;
}
int main()
{


    return 0;
}