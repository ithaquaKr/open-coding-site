#include <iostream>
using namespace std;

long  UCLN(long a, long b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
long BCNN(long a, long b) {
    return (a*b)/UCLN(a,b);
}

int main () {
    int t;
    int n;
	cin>>t;
    while (t--) {
    	cin>>n;
    	int temp=1;
    	for (int i=1;i<=n;i++) {
    		temp=BCNN(temp,i);
		}
		cout<<temp<<endl;
	}
    return 0;
}