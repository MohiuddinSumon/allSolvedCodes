#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
};

void printList(Node* head)
{
    cout<<"List Contains: "<<endl;
    while(head != NULL)
    {
        cout<<head->data<<' ';
        head=head->next;
    }
    cout<<endl;
}

void push_front(Node** head, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}
void push_back(Node** head, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    if(*head == NULL)
    {
        *head = new_node;
        return;
    }
    Node *last = *head;
    while(last->next != NULL)last=last->next;
    last->next = new_node;

}
//Node *getHead()
//{
//    return head;
//}

Node* getNode(Node** head, int key)
{
    Node *tmp = *head;
    cout<<"Searching for data "<<tmp<<' '<<tmp->data<<endl;

    while(tmp->next != NULL)
    {
        if(tmp->data == key) return tmp;
        cout<<tmp->data<<endl;
        tmp=tmp->next;
    }

    cout<<"Data not found"<<tmp->next<<' '<<tmp<<' '<<tmp->data<<endl;
    return tmp;
}

void push_after(Node *prev, int data)
{
    if(prev->next == NULL) cout<<"Insertion is not possible, check if previous key exist or it's not last element!"<<endl;
    else{
        Node *new_data = new Node();
        new_data->data = data;
        new_data->next = prev->next;
        prev->next = new_data;
    }
}

void deleteNode(Node ** head, int key)
{
    Node *temp = *head;
    Node *prev = temp;

    if(temp != NULL && temp->data == key)
    {
        *head = temp->next;
        *head = NULL;///defining empty list
        free(temp);
        return;
    }
    while(temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL){cout<<key<<" not found in the list!"<<endl;return;}
    prev->next = temp->next;
    free(temp);
}

void deleteList(Node** head)
{
    Node *temp = *head;
    Node* next;
    while(temp != NULL)
    {
        next=temp->next;
        free(temp);
        temp=next;
    }
    *head = NULL;
}


void reverseList(Node**  head)
{
    Node *current = (*head);
    Node *prev = NULL;
    Node *next=NULL;

    while(current->next != NULL)
    {
        next=current->next;
        current->next=prev;
        prev = current;
        current = next;
        cout<<current->data<<' '<<current->next<<endl;
    }
    current->next=prev;
//    prev = current;
    (*head) = current;
}

int main()
{
    Node* head = new Node();
    head->data = 1;
    head->next = NULL;

    printList(head);
    while(1)
    {
        int choice,key,skey;
        cout<<endl;
        cout<<"0 for head"<<endl;
        cout<<"1 for print"<<endl;
        cout<<"2 for push_front"<<endl;
        cout<<"3 for push_back"<<endl;
        cout<<"4 for push_after"<<endl;
        cout<<"5 for delete key"<<endl;
        cout<<"6 for delete full list"<<endl;
        cout<<"7 for reversing the list"<<endl;

        cout<<endl;

        cin>>choice;
        switch(choice)
        {
            case 0:
                if(head != NULL) cout<<head->data<<endl;
                break;
            case 1:
                printList(head);
                break;
            case 2:
                cin>>key;
                push_front(&head,key);
                break;
            case 3:
                cin>>key;
                push_back(&head,key);
                break;
            case 4:
                cout<<"Insert previous key"<<endl;
                cin>>skey;
                cout<<"Insert Key"<<endl;
                cin>>key;
                push_after(getNode(&head,skey),key);
                break;
            case 5:
                cout<<"Insert Key"<<endl;
                cin>>key;
                deleteNode(&head, key);
                break;
            case 6:
                deleteList(&head);
            case 7:
                reverseList(&head);
                cout<<"Reversing List Contains: "<<endl;
                printList(head);
                break;
            default:
                cout<<"Wrong choice"<<endl;
                break;

        }

    }

    return 0;
}
