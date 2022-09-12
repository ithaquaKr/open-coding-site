#include<bits/stdc++.h>
using namespace std;

void Inlist(list<int> ds,string name){
    cout << "Danh sách " << name << "\t";
    if(ds.empty()) cout << "Empty";
    else{
        list<int>::iterator it;
        for(it=ds.begin(); it!=ds.end();it++){
            cout << *it << " ";
        }
    }
    cout << endl;
}


int main(){
    int ds1[] = {1,2,3,4,5,6};
    list<int> a(ds1,ds1+6);
    Inlist(a,"a");
    return 0;
}