#include <stdio.h>

void even_number(int start, int end)
{
    if(start > end){
        return;
    }
    if(start%2 == 0){
        printf("  %d",start);
    }

    even_number(start+1, end);
}

void odd_number(int start, int end)
{
    if(start > end){
        return;
    }
    if(start%2 != 0){
        printf("  %d",start);
    }

    odd_number(start+1, end);
}

int main()
{
    int start, end;
    printf("Enter your range : ");
    scanf("%d%d",&start ,&end);

    printf("\nEven number between %d to %d is :",start ,end);
    even_number(start, end);

    printf("\nOdd number between %d to %d is :",start ,end);
    odd_number(start, end);

    return 0;
}
