#include <stdio.h>
#include <algorithm>
#include <vector>

class Edge
{
public:
    int u;
    int v;
    int weight;

    Edge(int a, int b, int w);
};

Edge::Edge(int a, int b, int w)
{
    u = a;
    v = b;
    weight = w;
}

bool compareEdge(Edge& e1, Edge& e2)
{
    return e1.weight < e2.weight;
}

class EdgeSet
{
public:
    std::vector<Edge> list;

    void sort_Edges();
    void print_EdgeSet();
};

void EdgeSet::sort_Edges()
{
    sort(list.begin(), list.end(), compareEdge);

}

void EdgeSet::print_EdgeSet()
{
    printf("-------------------------------------------\n");
    for(int i=0; i<list.size(); i++)
    {
        printf("(%d, %d) weight %d\n", list[i].u, list[i].v, list[i].weight);
    }
    printf("-------------------------------------------\n");
}

class DisjointForest
{
    int parent[100];
    int rank[100];

public:
    void make_set(int u);
    int find_set(int u);
    void link(int u, int v);
    void Union(int u, int v);

};

void DisjointForest::make_set(int u)
{
    parent[u] = u;
    rank[u] = 0;
}

int DisjointForest::find_set(int u)
{
//  used path compression
    if(parent[u] == u)
        return u;
    else
        return parent[u] = find_set(parent[u]);
}

void DisjointForest::link(int u, int v)
{
//  used union by rank
    if(rank[u]>rank[v])
        parent[v] = u;
    else {
        parent[u] = v;
        if(rank[u] == rank[v])
            rank[v]++;
    }
}

void DisjointForest::Union(int u, int v)
{
    link(find_set(u), find_set(v));
}

class Graph
{
public:
    int nVertices;
    bool weighted;
    bool directed;
    int adjMatrix[100][100];

    Graph(int n, bool weighted, bool directed);
    void add_edge(int u, int v);
    void add_edge(int u, int v, int weight);
    void delete_edge(int u, int v);
    EdgeSet get_Edgeset();
    void print_graph();
};

Graph::Graph(int n, bool weigh, bool dir)
{
    nVertices = n;
    weighted = weigh;
    directed = dir;

    for(int i = 0; i < nVertices; i++)
    {
        for(int j = 0; j< nVertices; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }
}

void Graph::add_edge(int u, int v)
{
    adjMatrix[u][v] = 1;
    if(!directed)
    {
        adjMatrix[v][u] = 1;
    }
}

void Graph::add_edge(int u, int v, int weight)
{
    adjMatrix[u][v] = weight;
    if(!directed)
    {
        adjMatrix[v][u] = weight;
    }
}

void Graph::delete_edge(int u, int v)
{
    adjMatrix[u][v] = 0;
    if(!directed)
    {
        adjMatrix[v][u] = 0;
    }
}

EdgeSet Graph::get_Edgeset()
{
    EdgeSet E;
    for(int j=0; j<nVertices; j++)
    {
        for(int i=0; i<j; i++)
        {
            if(adjMatrix[i][j] != 0)
            {
                Edge e(i, j, adjMatrix[i][j]);
                E.list.push_back(e);
            }
        }
    }
    return E;
}

void Graph::print_graph()
{
    printf("-------------------------------------------\n");
    for(int i = 0; i < nVertices; i++)
    {
        for(int j = 0; j< nVertices; j++)
        {
            printf("%3d ", adjMatrix[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------------------------\n");
}


int main()
{
    Graph G(7, true, false);

    G.print_graph();

    G.add_edge(0, 1, 2);
    G.add_edge(1, 2, 19);
    G.add_edge(2, 3, 9);
    G.add_edge(3, 4, 1);
    G.add_edge(4, 5, 13);
    G.add_edge(5, 6, 21);
    G.add_edge(2, 4, 5);
    G.add_edge(1, 5, 25);
    G.add_edge(0, 6, 8);
    G.add_edge(0, 5, 14);
    G.add_edge(2, 5, 17);

    G.print_graph();

//  write your code here

    return 0;
}
