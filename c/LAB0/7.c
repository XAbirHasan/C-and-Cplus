#include <stdio.h>

void largestElement(int element[],int max,int i,int n)
{
    if(i<n){
        if (max<element[i])
        {
            max=element[i];
        }
        largestElement(element,max,i+1,n);
    }
    else
    {
        printf ("Max element : %d\n",max);
        return;
    }
}

void main ()
{
    int element[1000];
    int n,i;
    printf("Enter number of element : ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&element[i]);
    }
    int max=element[0];
    largestElement(element,max,0,n);
}
