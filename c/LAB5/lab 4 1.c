#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library
{
    int book_id;
    char author_name[20];
    int price;
    int issue_date;

}info[100];
int book;

void add_info()
{
    int i = book;
    printf("\nAdd info :");
    printf("\n\nEnter book id :");
    scanf("%d",&info[i].book_id);
    fflush(stdin);
    printf("Enter Author name :");
    gets(info[i].author_name);
    printf("Enter book price :");
    scanf("%d",&info[i].price);
    printf("Enter issue date :");
    scanf("%d",&info[i].issue_date);
    printf("\n");
    book++;
}

void display()
{
    printf("\nBook info :\n");
    int i;
    for(i=0;i<book;i++)
    {
        printf("\nBook id : %d",info[i].book_id);
        printf("\nAuthor name : %s",info[i].author_name);
        printf("\nBook price : %d",info[i].price);
        printf("\nIssue date : %d\n",info[i].issue_date);
    }

}

void dis_author(char name[])
{
    printf("\nAuthor name : %s .His books :",name);
    int i;
    for(i=0;i<book;i++)
    {
        if( strcmp(name,info[i].author_name) == 0)
        {
            printf("\nBook id : %d",info[i].book_id);
            printf("\nBook price : %d",info[i].price);
            printf("\nIssue date : %d\n",info[i].issue_date);
        }
    }
}

void number_of_book()
{
    printf("The book in library : %d",book);

}

void find_book(int p)
{
    printf("\nlist of book price  : %d \n",p);
    int i;
    for(i=0;i<book;i++)
    {
        if( p == info[i].price )
        {
            printf("\nBook id : %d",info[i].book_id);
            printf("\nAuthor name : %s",info[i].author_name);
            printf("\nIssue date : %d\n",info[i].issue_date);
        }
    }
}

int main()
{

    char ch, author[20];
    while(1)
    {
        fflush(stdin);
        printf("\nEnter your choice :\n");
        printf("(a) Add book Information\n(b) Display book information\n(c) Display all books of given author\n(d) List the count of books in the library\n(e) Find all books for the given price\n(f) Exit\n");
        scanf("%c",&ch);
        if(ch=='a')
        {
            add_info();
        }
        if(ch == 'b')
        {
            if(book == 0)
            {
                printf("\nNO Book added yet...!\n");
            }
            else display();
        }
        if(ch == 'c')
        {
            if(book == 0)
            {
                printf("\nNO Book added yet...!\n");
            }
            else
            {
                fflush(stdin);
                printf("\nEnter Author name :");
                gets(author);
                dis_author(author);
            }

        }
        if(ch == 'd')
        {
            number_of_book();
        }
        if(ch == 'e')
        {
            if(book == 0)
            {
                printf("\nNO Book added yet...!\n");
            }
            else
            {
                int price;
                printf("\nEnter book price :");
                scanf("%d",&price);
                find_book(price);
            }
        }
        if(ch == 'f')
        {
            break;
        }

    }
}
