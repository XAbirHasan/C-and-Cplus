#include <stdio.h>
#include <string.h>

struct info
{
    char id[100];
    char password[100];

};

struct info sign_up()
{
    struct info user;
    printf("Enter your id : ");
    fflush(stdin);
    gets(user.id);
    printf("Enter your password : ");
    gets(user.password);

    return user;

}

int login()
{
    struct info log, reg;

    int l;

    FILE *fp;

    log = sign_up();

    fp = fopen("login.txt","r");

    if(fp == NULL)
    {
        printf("\n Error! opening file\n");
        exit(1);
    }

    while(!feof(fp))
    {

        fgets(reg.id,100,fp);
        printf("%s",reg.id);

        fgets(reg.password,100,fp);
        printf("%s",reg.password);

        if((strcmp(log.id,reg.id)!=0) && (strcmp(log.password,reg.password) != 0))
        {

            l = 0;

        }
        else
        {
            l = 1;
            break;
        }

    }
    fclose(fp);

    return l;
}

int main()
{
    struct info user;

    int n, log;

    FILE *fp;

    printf("Enter your choice :\n1. for register\n2. for login\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            user = sign_up();

            fp = fopen("login.txt","a+");

            fprintf(fp,"%s\n",user.id);
            fprintf(fp,"%s\n",user.password);

            fclose(fp);

            break;

        case 2:
            log = login();

            if(log==1)
            {
                printf("\n....You are logged in..\n");
            }
            else
            {
                 printf("\nYour id or password is wrong.....!\n");
            }

            break;

        default :
            printf("You enter wrong....!\n");
            break;
    }



    return 0;
}
