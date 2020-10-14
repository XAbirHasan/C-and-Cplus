#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

node* head = NULL;
node* tail = NULL;


void enqueue(int value)
{
    node* newNode = new node;
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void dequeue()
{
    if(head == NULL)
    {
        head = NULL;
        tail = NULL;
        return;
    }
    head = head->next;
}

void display()
{
    if(head == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue : ";
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    string input;
    while(1)
    {
        cin >> input;
        if(input == "enqueue")
        {
            int value;
            cin>> value;
            enqueue(value);
            display();
        }
        else if(input == "dequeue")
        {
            dequeue();
            display();
        }
        else
        {
            break;
        }
    }
    return 0;
}

