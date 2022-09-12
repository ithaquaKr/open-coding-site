#include<bits/stdc++.h>
using namespace std;

struct LinkList{
    int data;
    LinkList *next;
};    //ds liên kết đơn
typedef struct LinkList *node;
class single_llist 
{
    public:
        node create_node(int);  //Tao mot node
        void insert_begin();        //Them node vao vi tri dau danh sach
        void insert_pos();          //Them node vao vi tri cho truoc 
        void insert_last();         //Them node tai vi tri cuoi
        void delete_post();         //Xoa node tai vi tri cho truoc
        void sort();                //Sap xep noi dung theo thu tu tang dan
        void search();              //Tim kiem node tren danh sach
        void update();              //Thay doi thong tin cua node
        void reverse();             //Dao nguoc danh sach lien ket don
        void display();             //Hien thi noi dung
        single_llist(){ //Constructor
            node = NULL;
        }
};

int main()
{
    cout << sizeof(node) << endl;
    return 0;
}