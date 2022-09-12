//DOTHI001 - Bài toán người du lịch

#include<bits/stdc++.h>
using namespace std;

// Function to find the minimum weight Hamiltonian Cycle
void tsp(int graph[][21], vector<bool>& v, int currPos,
         int n, int count, int cost, int& ans)
{
    if (count == n && graph[currPos][0]) {
        ans = min(ans, cost + graph[currPos][0]);
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!v[i] && graph[currPos][i]) {
            // Mark as visited
            v[i] = true;
            tsp(graph, v, i, n, count + 1,
                cost + graph[currPos][i], ans);
            // Mark ith node as unvisited
            v[i] = false;
        }
    }
};

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[401][3];
    int graph[21][21];
    memset(graph,0,sizeof(graph[0][0])*n*n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<3;j++){
            cin >> arr[i][j];
        }
        int x = arr[i][0], y = arr[i][1], z= arr[i][2];
        graph[x-1][y-1] = z; 
    }
    // Boolean array to check if a node
    // has been visited or not
    vector<bool> v(n);
    for (int i = 0; i < n; i++)
        v[i] = false;
    // Mark 0th node as visited
    v[0] = true;
    int ans = INT_MAX;
    // Find the minimum weight Hamiltonian Cycle
    tsp(graph, v, 0, n, 1, 0, ans);
    cout << ans << endl;
    return 0;
}