#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};


node* makeNode(int value)
{
    node* newNode = new node;
    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

node* insertLast(node* head, int value)
{
    if(head == NULL)
    {
        return makeNode(value);
    }
    head->next = insertLast(head->next,value);
}

node* deleteLast(node*head)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->next == NULL)
    {
        return NULL;
    }
    head->next = deleteLast(head->next);
}

void display(node* head)
{
    if(head == NULL)
    {
        return;
    }
    cout << head->data << "  ";
    display(head->next);
}

void searchValue(node* head, int key)
{
    if(head == NULL)
    {
        cout << "Not found" << endl;
        return;
    }
    if( head->data == key)
    {
        cout << "Found" << endl;
        return;
    }
    searchValue(head->next,key);
}

int main()
{
    string input;
    node* head = NULL;
    node* stack_S = NULL;
    while(1)
    {
        cin >> input;
        if(input == "insert")
        {
            int value;
            cin >> value;
            head = insertLast(head,value);
            cout <<"List : ";
            display(head);
            cout << endl << endl;
        }
        else if(input == "delete")
        {
            head = deleteLast(head);
            if(head == NULL)
            {
                cout << "List is empty";
            }
            else
            {
                cout <<"List : ";
                display(head);
            }
            cout << endl << endl;
        }
        else if(input == "search")
        {
            int key;
            cin >> key;
            searchValue(head,key);
            cout << endl;
        }
        else if(input == "push")
        {
            int value;
            cin >> value;
            stack_S = insertLast(stack_S,value);
            cout <<"Stack : ";
            display(stack_S);
            cout << endl << endl;
        }
        else if(input == "pop")
        {
            stack_S = deleteLast(stack_S);
            if(stack_S == NULL)
            {
                cout << "Stack is empty";
            }
            else
            {
                cout <<"Stack : ";
                display(stack_S);
            }
            cout << endl << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}
