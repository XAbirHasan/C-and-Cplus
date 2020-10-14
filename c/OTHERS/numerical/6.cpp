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
node* seperate_NP(node* head, node* head_NP)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(check_prime(temp->data) == false)
        {
            head_NP = insert_list(temp->data,head_NP);
        }
        temp = temp->next;
    }
    return head_NP;
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

int main()
{
    srand(time(NULL));
    node* head = NULL;
    node* head_P = NULL;
    node* head_NP = NULL;


    for(int i = 1; i <= 100; i++)
    {
        head = insert_list(rand()%1000, head);
    }
    head_P = seperate_P(head,head_P);
    cout << "Prime list :" << endl;
    display_list(head_P);

    head_NP = seperate_NP(head,head_NP);
    cout << "\nNon-prime list :" << endl;
    display_list(head_NP);
    return 0;
}
