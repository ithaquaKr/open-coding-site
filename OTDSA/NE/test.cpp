#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	char arr[n];
    vector<int> edge;
	for(int i = 0 ; i < n ; i++){
        for(int j=0; j<3; j++){
		    cin >> arr[j];
		    if(arr[j] != ','){
			    edge.push_back(arr[j]-'0');
		    }
        }
	}
    if(edge[0] == edge[3] || edge[0] == edge[2])
        cout << edge[0] << endl;
    else
        cout << edge[1] << endl;
    return 0;
}