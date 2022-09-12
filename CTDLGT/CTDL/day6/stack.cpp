// Stack sử dụng mảng

#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack {
    int top;
    public:
        int a[MAX]; //Max size of stack

        Stack() { top = -1;}
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
};
////
bool Stack::push(int x)
{
    if(top >= MAX-1){
        cout << "Stack bị tràn";
        return false;
    }
    else{
        a[++top] = x;
        cout << x << " đã được thêm vào Stack \n";
        return true;
    }
}

int Stack::pop()
{
    if(top < 0){
        cout << "Không có giá trị trong stack ";
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}

int Stack::peek()
{
    if(top < 0){
        cout << "Stack rỗng ";
        return 0;
    }
    else{
        int x = a[top];
        return x;
    }
}
bool Stack::isEmpty()
{
    return (top < 0);
}

////


int main()
{
    class Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.pop() << " \n";
    
    return 0;
}