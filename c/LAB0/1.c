#include <stdio.h>

void capitalfirst(char s[],int i,int n)
{
    if (s[i]!='\0')
    {
        if ((s[i]>='A')&&(s[i]<='Z'))
        {
            printf ("First Letter Found : %c\n",s[i]);
            return;
        }
        capitalfirst(s,i+1, n);
    }
    else
    {
        printf ("Not found\n");
        return;
    }
}

void main()
{
    char s[1000];
    gets(s);
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    capitalfirst(s,0,i);
}
