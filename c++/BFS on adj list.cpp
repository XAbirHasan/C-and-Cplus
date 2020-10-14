#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;


queue<string>Q;
int distnce[100];
string parents[100];
string color[100];

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

void bfs(string  st_node, vector<string>adj_list[], vector<string>vertices)
{
    while(!Q.empty())
    {
        string u = Q.front();
        Q.pop();
        int u_index = get_index(vertices,u);

        for(int i = 0; i<adj_list[u_index].size();i++)
        {
            string v = adj_list[u_index][i];
            int v_index = get_index(vertices,v);
            if(color[v_index] == "W")
            {
                parents[v_index] = u;
                distnce[v_index] = distnce[u_index] + 1;
                color [v_index]  = "G";
                Q.push(v);
            }
        }
        color[u_index]="B";
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

    for(int i = 0; i<vertx; i++)
    {
        distnce[i] = -1;
        parents[i] = "Null";
        color[i] = "W";
    }
    string st_node;
    cout << "\nStarting Vertex : ";
    cin >> st_node;
    int st_index = get_index(vertices,st_node);

    if(st_index == -1)
    {
        cout<<"Vertex not FOUND!"<<endl;
    }
    else
    {
        distnce[0] = 0;
        color[0] = "G";

        Q.push(st_node);
        bfs(st_node, adj_list,vertices);

        cout << "\nVertices :\t";
        for(int i = 0; i<vertices.size(); i++)
        {
            cout<< vertices[i]<< "\t";
        }

        cout << "\nDistance :\t";

        for(int i = 0 ; i < vertx ; i++)
        {
            cout << distnce[i] << "\t" ;
        }
        cout << "\nParents :\t";
        for(int i = 0 ; i < vertx ; i++)
        {
            cout << parents[i] << "\t" ;
        }
        cout << "\nColor : \t";
        for(int i = 0 ; i < vertx ; i++)
        {
            cout << color[i] << "\t";
        }
        cout << endl;
    }
    return 0;
}
