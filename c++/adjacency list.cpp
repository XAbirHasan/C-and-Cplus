#include <iostream>
#include <vector>
#include <string>

using namespace std;

int get_index(vector<string> vt, string ch){
    for(int i=0;i<vt.size();i++)
    {
        if(vt[i] == ch)
        {
            return i;
        }
    }
    return -1;
}

void print_adj_list(vector<string>vertices, vector<string>adj_list[], int n){
    for(int i=0;i<n;i++)
    {
        cout<<vertices[i]<<" : ";
        for(int j=0; j<adj_list[i].size() ;j++)
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int vertx, edges;
    cout<<"Number of vertices : ";
    cin >>vertx;

    vector<string>vertices;
    string v_name;

    for(int i = 0 ;i<vertx;i++)
    {
        cin>> v_name;
        vertices.push_back(v_name);
    }

    vector<string>adj_list[vertx];

    cout <<"\nnumber of Edges : ";
    cin>> edges;
    cout << endl;

    string u, v;
    int u_index, v_index;
    for(int i = 0; i<edges;i++)
    {
        cin >> u >> v;
        u_index = get_index(vertices,u);
        v_index = get_index(vertices,v);
        if(u_index == -1 || v_index == -1)
        {
            cout<<"Vertex not FOUND!"<<endl;
            break;
        }
        adj_list[u_index].push_back(v);
        adj_list[v_index].push_back(u);
    }
    cout << endl;
    print_adj_list(vertices, adj_list, vertx);

    return 0;
}

/* for test...........
5
A B C D E
5
A B
A C
B C
B D
D E
*/

