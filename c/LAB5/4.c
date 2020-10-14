#include <stdio.h>

int main()
{
    char str[100], the[4];
    int i, frequency=0;

    printf("Enter your string :");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='t' && str[i+1]=='h' && str[i+2] == 'e' && str[i+2] != '\0')
        {
            frequency++;
        }
    }

    printf("\nFrequency of 'the' in given sentence : %d \n",frequency);
}
