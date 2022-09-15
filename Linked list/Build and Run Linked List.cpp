/*
Linked list Baiscs with insertion and search
*/

#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node(int value){
        data = value;
        next = NULL;
    }
};

void insertatHead(node* &head, int val){
    node* cur = head;
    cur->next = head;
    head = cur;
}

void insertAtTail(node* &head, int val){
node* n = new node(val);
if(head == NULL){
    head = n;
}
node* temp = head;
while(temp->next !=NULL){
    temp = temp->next;
}
temp->next = n;

}

void display(node* head)
{
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout <<"NULL" << endl;
}

bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data=key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertatHead(head, 4);
    display(head);
    cout << search(head, 3) << endl;
    display(head);
    cout << search(head, 50) << endl;


    return 0;
}