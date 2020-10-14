#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct node
{
    int data;
    node* next;
};
node* insert_list(int value,node* head)
{
    node* nNode = new node;
    nNode->data = value;
    nNode->next = NULL;
    if(head == NULL)
    {
        head = nNode;
        return head;
    }
    nNode->next = head;
    head = nNode;

    return head;
}

bool check_prime(int n)
{
    bool flag = true;
    for(int i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

node* seperate_P(node* head, node* head_P)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(check_prime(temp->data) == true)
        {
            head_P = insert_list(temp->data,head_P);
        }
        temp = temp->next;
    }
    return head_P;
}

void display_list(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data <<"\t";
        temp=temp->next;
    }
    cout << endl;
}

node* sort_list(node* head)
{
    node* temp1 = head;
    node* temp2 = head;
    while(temp1!= NULL)
    {
        while(temp2!= NULL)
        {
            if(temp2->data > temp2->next->data)
            {
                int temp = temp2->data;
                temp2->data = temp2->next->data;
                temp2->next->data = temp;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return head;
}

int main()
{
    srand(time(NULL));
    node* head = NULL;
    node* head_P = NULL;

    for(int i = 1; i <= 100; i++)
    {
        head = insert_list(rand()%1000, head);
    }
    head_P = seperate_P(head,head_P);
    //head_P = sort_list(head_P);
    cout << "Prime list :" << endl;
    display_list(head_P);
    return 0;
}

