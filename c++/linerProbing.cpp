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
    k = key%10;
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
    if(head == NULL || head->data == -1)
    {
        hashT[indx] = nNode;
        return;
    }
    for( int i=1;i<10;i++)
    {
        indx = key_gen(key + i);
        head = hashT[indx];
        {
           if( head == NULL || head->data == -1)
           {
               hashT[indx] = nNode;
               return;
           }
        }
    }
    cout<<"\nHash Table FULL...!"<<endl;

}

bool search_hash_table(int val, int key)
{
    int indx = key_gen(key);
    for(int i = 0; i<10;i++)
    {
        indx = key_gen(key + i);
        node *head = hashT[indx];
        if(head == NULL || head->data == -1 )
        {
            return false;
        }
        if((head!= NULL || head->data != -1) && head->data == val)
        {
            return true;
        }
    }
    return false;
}

void delete_hash_table(int val, int key)
{
    int indx = key_gen(key);
    if(search_hash_table(val, key) == false){
        return ;
    }
    node* head = hashT[indx];
    head->data = -1;
}

void print()
{
    int i;
    for(i=0; i<10; i++)
    {
        node * temp = hashT[i];
        cout <<"Hash table " << i <<" : ";
        if(temp != NULL)
        {

            if(temp->data == -1)
            {
                cout << endl;
                continue;
            }
            cout << temp->data ;
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
                cout << "\nData is found ." << endl;
            }
            else
            {
                cout << "\nData is not found ." << endl;
            }
        }
        if(str == "delete")
        {
            delete_hash_table(val, key);
        }
        print();
    }
}

