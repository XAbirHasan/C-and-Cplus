#include<iostream>
#include<vector>
#include<string>

using namespace std;

int get_index(vector<string> vt, string ch){
    for(int i=0;i<vt.size();i++){
        if(vt[i] == ch){
            return i;
        }
    }
    return -1;
}

void print(vector<int>adj_mat[], int n){
    for(int i=0;i<n;i++){
        cout<<i<<": ";
        for(int j=0;j<n;j++){
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    vector<string> vertices;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        vertices.push_back(s);
    }
    vector<int> adj_matrix[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adj_matrix[i].push_back(0);}
    }
    int edges;
    cin>>edges;
    string u, v;
    int u_indx, v_indx;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        u_indx = get_index(vertices, u);
        v_indx = get_index(vertices, v);
        if(u_indx == -1 || v_indx == -1) {
            cout<<"Vertex not FOUND!"<<endl;
            break;
        }
        adj_matrix[u_indx][v_indx] = 1;
        adj_matrix[v_indx][u_indx] = 1;
    }
    print(adj_matrix,n);
    return 0;
}


/*
5
A B C D E
5
A B
A C
B C
B D
D E
*/
