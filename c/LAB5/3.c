#include <stdio.h>

int main()
{
    char str[100];
    int i, j, index, count, max;

    printf("Enter your string :");
    gets(str);

    max = 0;
    for(i=0; str[i]!='\0'; i++)
    {
        count = 0;
        for(j = i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
            if(max < count)
            {
                max = count;
                index = i;
            }
        }
    }

    printf("\nThe highest frequency of the string : %c\n",str[index]);

    return 0;

}
