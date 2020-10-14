#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>


void delete_index(char s[],int ind)
{
    int i,j;
    for(i=0; s[i] !='\0'; i++)
    {
        if(i == ind)
        {
            for(j = i; s[j] != '\0'; j++ )
            {
                s[j] = s[j+1];
            }
        }
    }
    printf("\nThe string now : %s\n",s);

}

void main()
{
    char s[50];
    int index;
    gets(s);
    scanf("%d",&index);
    delete_index(s,index);
    _getch();
}
