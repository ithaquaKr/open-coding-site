//DAYSO001 - Dãy cấp số cộng

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[100000];
        int n;
        cin >> n;
	    for(int i = 0 ; i < n ; i++){
		    cin >> arr[i];
	    }
	    int mark = 1;
	    for(int i = 0 ; i < n - 2 ; i++){
		    if(arr[i + 2] - arr[i + 1] != arr[i + 1] - arr[i]){
			    mark = 0;
			    break;
		    }
	    }
	    if(mark == 0){
		    cout << "NO" << endl;
	    } 
        else{
		    cout << "YES" << endl;
	    }
    }
    return 0;
}