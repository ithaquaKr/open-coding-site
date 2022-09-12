#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

Node* CreatNode(int init_data)
{
    Node* node = new Node;
    node->data = init_data;
    node->next = NULL;
    return node;
}
struct LinkedList
{
    Node* head;
    Node* tail;
};
void CreatList(LinkedList& l)
{
    l.head = NULL;
    l.tail = NULL;
}

int main()
{
    LinkedList list;
    CreatList(list); 

    return 0;
}