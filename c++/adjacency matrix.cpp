#include <iostream>
#include <vector>
#include <string>


using namespace std;

int get_index(vector<string>vertices, string v)
{
    for(int i = 0; i<vertices.size(); i++)
    {
        if(vertices[i] ==  v)
        {
            return i;
        }
    }
    return -1;
}

void prit_adj_matrix(vector<int>adj_matrix[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << i <<" : ";
        for(int j = 0; j<n; j++)
        {
            cout << adj_matrix[i][j]<< " ";
        }
        cout << endl;
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

    vector<int>adj_matrix[vertx];
    for(int i = 0; i < vertx; i++)
    {
        for(int j = 0; j<vertx ; j++)
        {
            adj_matrix[i].push_back(0);
        }
    }
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

        adj_matrix[u_index][v_index] = 1;
        adj_matrix[v_index][u_index] = 1;
    }
    cout << endl;
    prit_adj_matrix(adj_matrix,vertx);

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
