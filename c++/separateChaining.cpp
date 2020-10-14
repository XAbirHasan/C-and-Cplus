#include <iostream>
#include <string>

using namespace std;

struct node
{
    int data;
    int key;
    node *next;
};

node * hashT[10];

void initialize()
{
    for(int i=0; i<10; i++)
    {
        hashT[i] = NULL;

    }
}

int key_gen(int key)
{
    int k;
    k = key % 10;
    if(key < 0)
    {
        k = k + 10;
    }
    return k;
}
void insert_hash_table(int val, int key)
{
    node* nNode = new node;
    nNode->data = val;
    nNode->key = key;
    nNode->next = NULL;

    int indx = key_gen(key);
    node * head = hashT[indx];
    if(head == NULL )
    {
        hashT[indx] = nNode;
        return;
    }
    while(head->next != NULL)
    {
        head = head->next;
    }
    head->next = nNode;

}

bool search_hash_table(int val, int key)
{
    int indx = key_gen(key);

    indx = key_gen(key);
    node *head = hashT[indx];
    if(head == NULL )
    {
        return false;
    }
    while(head!=NULL)
    {
        if(head->data == val)
        {
            return true;
        }
        head = head->next;
    }

    return false;
}

void delete_hash_table(int val, int key)
{
    int indx = key_gen(key);
    node* head = hashT[indx];

    if(head == NULL)
    {
        cout << "\nData is not found .\n" << endl;
        return;
    }
    if(head->next == NULL)
    {
        hashT[indx] = NULL;
        return;
    }
    while(head->next != NULL)
    {
        if(head->next->data == val)
        {
            head->next = head->next->next;
            return;
        }
        head = head->next;
    }
    cout << "\nData is not found .\n" << endl;

}

void print()
{
    int i;
    for(i=0; i<10; i++)
    {
        node * temp = hashT[i];
        cout <<"Hash table " << i <<" : ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}


int main()
{
    string str;
    int val, key;
    initialize();
    while (1)
    {
        cin >> str >> val >> key;
        if(str == "insert")
        {
            insert_hash_table(val, key);
        }
        if(str == "search")
        {
            bool s;
            s = search_hash_table(val, key);
            if(s == true)
            {
                cout << "\nData is found .\n" << endl;
            }
            else
            {
                cout << "\nData is not found .\n" << endl;
            }
        }
        if(str == "delete")
        {
            delete_hash_table(val, key);
        }
        print();
    }
}

