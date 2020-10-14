#include<iostream>
#include<string>

using namespace std;

struct node{
    int data;
    node* next;
};

node * head;
int indx = -1;

void show()
{
    node* temp = head;
    cout << "index" << indx <<endl;
    cout <<"List: ";
    while(temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_first(int x){
    node* temp = new node;

    temp->data = x;
    temp->next = head;
    head = temp;
    indx++;
}

void insert_last(int x){
    node* temp = new node;

    temp->data = x;
    temp->next = NULL;
    indx++;

    if(head == NULL) {
        return ;
    }

    node* temp2 = head;

    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;

}

void delete_last()
{
    if(head == NULL){
        return ;
    }
    else if(head->next == NULL){
        indx--;
        return ;
    }
    node* temp = head->next;

    node* temp2 = head;

    while(temp->next != NULL){
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = NULL;
    indx--;
}
void delete_first()
{
    if(head==NULL) {
        return ;
    }
    else{
        indx--;
        head = head->next;
    }

}

void update_val(int val, int update)
{
    while(head != NULL)
    {
       if(head->data == val)
       {
           head->data = update;
       }
       head = head->next;
    }
}

void update_index( int index, int val)
{
    if(index >= 0 && index <= index)
    {
        node* temp = head;

        for(int i=0;i<=index;i++)
        {
            temp= temp->next;
            cout << temp->data;
            if(i == index)
            {
                temp->data = val;
                head=temp;
            }
        }
    }
}

int main()
{
    head = NULL;

    string position;

    int val;

    while(1)
    {
        cin >> position;
        if(position == "insert-first"){
            cin >> val;
            insert_first(val);
        }
        else if(position == "insert-last"){
            cin >> val;
            insert_last(val);
        }
        else if(position == "delete-last"){
            delete_last();
        }
        else if(position == "delete-first"){
            delete_first();
        }
        else if(position == "exit"){
            break;
        }
        else if(position== "update-value")
        {
            int value, update;
            cin >> value >> update;
            update_val(value,update);
        }
        else if(position == "update-index"){
            int index, value;
            cin >> index >> value;
            update_index(index, value);
        }

        show();
    }

}
