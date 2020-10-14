#include <stdio.h>

void print_with_K(char str[])
{
    int i, j,k ,count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        count++;
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '.')
        {
            count=0;
        }
        if((str[i] == 'l' || str[i] == 'L')&& (str[i+1] == ' ' || str[i+1] == '\0' || str[i+1] == '.'))
        {
            for(j = i-count+1 ,k = 0; k<count;j++, k++)
            {
                 printf("%c",str[j]);
            }
            printf("\n");
            count=0;
            i=i+1;
        }
    }
}

int main()
{
    char str[100];
    printf("Enter your string :");
    gets(str);

    print_with_K(str);

    return 0;
}
