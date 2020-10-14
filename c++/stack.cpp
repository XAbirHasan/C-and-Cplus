#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

node* head = NULL;


void push(int value)
{
    node* newNode = new node;
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void pop()
{
    if(head == NULL)
    {
        head = NULL;
        return;
    }
    head = head->next;
}

void display()
{
    if(head == NULL)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack : ";
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
        if(input == "push")
        {
            int value;
            cin>> value;
            push(value);
            display();
        }
        else if(input == "pop")
        {
            pop();
            display();
        }
        else
        {
            break;
        }
    }
    return 0;
}
