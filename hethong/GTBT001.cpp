// Đa thức tổng
// Với số nguyên dương n (1<=n<=20) và số thực x. Tính giá trị biểu thức
/*Input: 
    2
    10 0.0
    2 1
Ouput:
    0
    1.333
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned int n;
        int mau=0;
		float x,result=0.0,tmp=1.0;
		cin>>n>>x;
		for(int i=1;i<=n;i++){
			tmp*=x;
			mau+=i;
			result+=tmp/mau;
		}
		cout<<fixed<<setprecision(3)<< result <<endl;
	}
	return 0;
}