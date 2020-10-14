#include<iostream>
#include<string>
#include<vector>
using namespace std;


int get_index(vector<string> vt, string ch){
    for(int i=0;i<vt.size();i++){
        if(vt[i] == ch){
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    vector<string> vertices;
    string s;
    while(n--){
        cin>>s;
        vertices.push_back(s);
    }
    n = vertices.size();
    vector<string> adj_list[n];
    int e;
    cin>>e;
    string u, v;
    int u_indx, v_indx;
    while(e--){
        cin>>u>>v;
        u_indx = get_index(vertices, u);
        adj_list[u_indx].push_back(v);
        v_indx = get_index(vertices, v);
        adj_list[v_indx].push_back(u);
    }

    for(int i=0;i<n;i++){
        cout<<vertices[i]<<": ";
        for(int j=0;j<adj_list[i].size();j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

