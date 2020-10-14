#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct library
{
    int price;
    int date;
    int id;
    char name[20];


};
struct library book[100];
int it;

void info_addition()
{
    int i = it;
    printf("\n\nEnter book id :");
    scanf("%d",&book[i].id);
    fflush(stdin);
    printf("Enter Author name :");
    gets(book[i].name);
    printf("Enter book price :");
    scanf("%d",&book[i].price);
    printf("Enter issue date :");
    scanf("%d",&book[i].date);
    printf("\n");
    it++;
}

void show()
{
    int i;
    for(i=0;i<it;i++)
    {
        printf("\nid : %d\nname : %s\nprice : %d\ndate : %d",book[i].id,book[i].name,book[i].price,book[i].date);
    }

}

void dis_author(char n[])
{
    int i;
    for(i=0;i<it;i++)
    {
        if( strcmp(n,book[i].name) == 0)
        {
            printf("\nid : %d\nprice : %d\ndate : %d\n",book[i].id,book[i].price,book[i].date);
        }
    }
}

void book_show()
{
    printf("Number of books: %d",it);

}

void prince_finder(int p)
{
    int i;
    for(i=0;i<it;i++)
    {
        if( p == book[i].price )
        {
            printf("\nBook id : %d\nname : %s\nIssue date : %d\n",book[i].id,book[i].name,book[i].date);
        }
    }
}

int main()
{

    char auth[20];
    int c;
    while(1)
    {
        fflush(stdin);
        printf("\n(1) Add book Information\n(2) Display book information\n(3) Display all books of given author\n(4) List the count of books in the library\n(5) Find all books for the given price\n(6) Exit\n");
        scanf("%d",&c);
        if(c == 1)
        {
            info_addition();
        }
        if(c == 2)
        {
            if(book == 0)
            {
                printf("\nNo Book!\n");
            }
            else show();
        }
        if(c == 3)
        {
            if(book == 0)
            {
                printf("\nNo Book!\n");
            }
            else
            {
                fflush(stdin);
                printf("\n Author name :");
                gets(auth);
                dis_author(auth);
            }

        }
        if(c == 4)
        {
            book_show();
        }
        if(c == 5)
        {
            if(book == 0)
            {
                printf("\nNO Book!\n");
            }
            else
            {
                int p;
                printf("\nEnter book price :");
                scanf("%d",&p);
                prince_finder(p);
            }
        }
        if(c == 6)
        {
            return;
        }
    }
    _getch();
}
