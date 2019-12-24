#include <iostream>
using namespace std;

// Class to implement a node in a Linked List
class Node{
    public:
    int data;
    Node* next;
    
};

// Function to print a Linked List
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// Function to append a node in a Linked List
void insert(Node** head, int val){
    Node* newNode= new Node();
    newNode->data=val;
    newNode->next=NULL;

    Node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newNode;
}

//Function to delete a specified node in a Linked List, indexing starts from 0
void deleteNode(Node** head, int n){
    int count=0;
    Node* temp=*head;
    while(count!=n-1){
        count++;
        temp=temp->next;
    }
    temp->next=temp->next->next;



}

// Driver code
int main(){
    Node* first=new Node();
    Node* second=new Node();
    Node* third=new Node();

    first->data=1;
    second->data=2;
    third->data=3;

    first->next=second;
    second->next=third;
    third->next=NULL; 

    cout<<"Original LinkedList is:"<<endl;
    printLL(first);

    insert(&first,4);
    cout<<"LinkedList after adding 4 is:"<<endl;
    printLL(first); 

    deleteNode(&first,1);
    cout<<"LinkedList after deleting the node at index 1 is:"<<endl;
    printLL(first);
    
    
    
    return 0;
}