#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<queue>

using namespace std ;

vector<int>grph[100] ;
queue<int>Q ;
int d[100] , col[100] , par[100] ;

void bfs(int s)
{
    while(!Q.empty())
    {
        int u = Q.front() ;
        Q.pop() ;
        for(int i = 0 ; i < grph[u].size() ; i++)
        {
            int v = grph[u][i] ;
            if(col[v] == 0)
            {
                col[v] = 1 ;
                par[v] = u ;
                d[v] = d[u]+1 ;
                Q.push(v) ;
            }

        }
        col[u] = 2 ; /*2 for black color*/
    }
}
int main()
{
    int node , edge , i , j , a , b ;
    printf("Node : ") ;
    scanf("%d" , &node) ;
    printf("\nEdge : ") ;
    scanf("%d" , &edge) ;
    for(i = 0 ; i < edge ; i++)
    {
        scanf("%d %d" , &a , &b) ;
        grph[a].push_back(b) ; /* grph is an adjancy list */
        grph[b].push_back(a) ;
    }
    for(i = 0 ; i < 100 ; i++)/* Initialization part*/
    {
        d[i] = -1 ;
        col[i] = 0 ; /*0 for white color*/
        par[i] = -1 ;
    }
    printf("\nStarting Node : ") ;
    int s ;
    scanf("%d" , &s) ;
    d[s] = 0 ;
    col[s] = 1 ;
    Q.push(s) ;
    bfs(s) ;
    printf("Dis : ") ;
    for(i = 0 ; i < node ; i++)
    {
        printf("%d " , d[i]) ;
    }

    printf("\nCol : ") ;
    for(i = 0 ; i < node ; i++)
    {
        printf("%d " , col[i]) ;
    }

    printf("\nPar : ") ;
    for(i = 0 ; i < node ; i++)
    {
        printf("%d " , par[i]) ;
    }
    return 0 ;
}
/*

Sample Input
5
6
0 1
1 2
2 3
3 1
3 4
4 5


*/
