// Bài 2 - ID: DT002 - Đường đi có tổng nhỏ nhất
#include <bits/stdc++.h>
using namespace std;
#define e -99999


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        int a[101][101], m, n;
        cin >> m >> n;
        int i,j;
        // co so quy hoach dong
        for(int i=0; i<=n; i++){
            a[0][i]=e;
            a[m+1][i]=e;
        }
        for(i=1; i<=m; i++){
            for(j=1; j<=n; j++){
                cin >> a[i][j];
            }
        }
    
        for(j=2; j<=n; j++){ // cot
            for(i=1; i<=m; i++){ // hang
                a[i][j]+=max(a[i-1][j-1], max(a[i][j-1],a[i+1][j-1]));
            }	
        }
        int result=e;
        for(i=1; i<=m; i++){ // m hang
            result = max(result, a[i][n]); // xet max o cot cuoi
        }
	cout << result << endl;
    }
    return 0;
}