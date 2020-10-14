#include <stdio.h>

void even(int i, int j);
void odd(int i, int j);

void main()
{
    int i, j;
    printf("Range : ");
    scanf("%d%d",&i ,&j);

    printf("Even from %d to %d is :",i ,j);
    even(i, j);

    printf("\nOdd from %d to %d is :",i ,j);
    odd(i, j);
}

void even(int i, int j)
{
    if(i > j){
        return;
    }
    if(i<=j){
        if(i%2 == 0){
            printf("\t%d",i);
        }
    }
    even(i+1, j);
}

void odd(int i, int j)
{
    if(i > j){
        return;
    }
    if(i<=j){
        if(i%2 != 0){
            printf("\t%d",i);
        }
    }
    odd(i+1, j);
}

