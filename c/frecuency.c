#include<stdio.h>
#include<string.h>
int main()
{
    char str_1[50],ch;
    int frequency=0,i;
    gets(str_1);

    scanf("%c",&ch);
    for(i=0;str_1[i]!='\0';i++){
        if (ch==str_1[i]){
            frequency++;
        }
    }
    printf("%d",frequency);
}
