// Adjacency Matrix representation of Graph
// Nhom 4
#include<bits/stdc++.h>
using namespace std;

class Graph {
    private:
        // number of vertices
        int n;
        // adjacency matrix
        int g[10][10];
        // Luu tru truy cap
        bool visited[100];
    public:
    // constructor
    Graph(int x)
    {
        n = x;
        // initializing each element of the adjacency matrix to zero
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                g[i][j] = 0;
            }
        }
    }

    void displayAdjacencyMatrix()
    {    
        cout << "\n\n Adjacency Matrix:";
        // displaying the 2D array
        for (int i = 0; i < n; ++i) {
            cout << "\n";
            for (int j = 0; j < n; ++j) {
                cout << " " << g[i][j];
                }
        }
    }

    void addEdge(int x, int y)
    {
        //0 1 2 3 n=4
        // checks if the vertex exists in the graph
        if ((x >= n) || (y >= n)) {
            cout << "Vertex does not exists!";
        }
    
        // checks if the vertex is connecting to itself
        if (x == y) {
            cout << "Same Vertex!";
        }
        else {
            // connecting the vertices
            g[y][x] = 1;
            g[x][y] = 1;
        }
    }

    // Function to update adjacency
    // matrix for edge removal
    void removeEdge(int x, int y)
    {
        // Checks if the vertices
        // exist in the graph
        if ((x < 0) || (x >= n)) {
            cout << "Vertex" << x
                 << " does not exist!";
        }
        if ((y < 0) || (y >= n)) {
            cout << "Vertex" << y
                 << " does not exist!";
        }
 
        // Checks if it is a self edge
        if (x == y) {
            cout << "Same Vertex!";
        }
 
        else {
            // Remove edge
            g[y][x] = 0;
            g[x][y] = 0;
        }
    }

    void addVertex()
    {
        // increasing the number of vertices
        n++;
        int i;
    
        // initializing the new elements to 0
        for (i = 0; i < n; ++i) {
            g[i][n - 1] = 0;
            g[n - 1][i] = 0;
        }
    }

    void removeVertex(int x)
    {
        // checking if the vertex is present
        if (x > n) {
            cout << "\nVertex not present!";
            return;
        }
        else {
            int i;
            // removing the vertex
            while (x < n) {
                // shifting the rows to left side
                for (i = 0; i < n; ++i) {
                    g[i][x] = g[i][x + 1];
                }
                // shifting the columns upwards
                for (i = 0; i < n; ++i) {
                    g[x][i] = g[x + 1][i];
                }
                x++;
            }
            // decreasing the number of vertices
            n--;
        }
    }

    //init_visited
	void init_visited(){
		memset(visited,false,sizeof(visited));
	}
	
    // duyEt theo chIEu sau DFT
    void DFT(int u){
        // HIen thi node hien tai
        cout << u << " ";
        // Dat node hien tai da truy cap
        visited[u] = true;
        // Duyet tat ca cac node cua graph
        for(int x=0; x < n; x++){
            //Neu co 1 node lien ve voi node hien tai va no van chua truy cap
            if(g[u][x] == 1 && (!visited[x])){
                DFT(x);
            }
        }
    }
    
    // duyet BFT
	void BFT(int u){
	    // buoc khoi tao
        vector<int>q;//khoi tao hang doi
        q.push_back(u);// push dinh u vao hang doi
        visited[u] = true;
        // buoc lap
        while(!q.empty()){
            int vis = q.front();// lay dinh o dau hang doi
            cout << vis << " ";
            q.erase(q.begin()); // xoa di
            for(int x = 0; x < n; x++){// duyet cac dinh ke cua n chua duoc di qua va day vao hang doi
                if(g[u][x] == 1 && (!visited[x])){//Neu co 1 node lien ve voi node hien tai va no van chua truy cap
                    q.push_back(x);// day vao trong hang doi
                    visited[x] = true;// danh dau la da duoc di qua
                }		
            }
        }	
    }

};

int main(){
    // creating objects of class Graph
    Graph obj(4);
 
    // calling methods
    obj.addEdge(0, 1);
    obj.addEdge(0, 2);
    obj.addEdge(1, 2);
    obj.addEdge(2, 3);
    // obj.addEdge(2, 3);
    // obj.addEdge(3, 3);
    // the adjacency matrix created
    obj.displayAdjacencyMatrix();
    cout << endl;
    obj.init_visited();
	obj.DFT(2);
    cout << endl;
    obj.init_visited();
    obj.BFT(2);
    cout << endl;
    return 0;
}