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
void insert(Node* head, int val){
    Node* newNode= new Node();
    newNode->data=val;
    newNode->next=NULL;

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newNode;
}

//Function to delete a specified node in a Linked List, indexing starts from 0
void deleteNode(Node* head, int n){
    int count=0;
    Node* temp=head;
    while(count!=n-1){
        count++;
        temp=temp->next;
    }
    temp->next=temp->next->next;
}

//Function that returns the size of the LinkedList
int size(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;     
        temp=temp->next;
    }
    return count;
}

//Returns the node at a given index
int getNode(Node* head,int index){
    int len=size(head);
    if(index==len){
        return -1;
    }
    else{
    int count=0;
    Node* temp=head;
    while(count<index && count<len){
        count++;
        temp=temp->next;
    }
   
    return temp->data;

    }
  
}

//Sets the node at a given index
void setNode(Node* head,int index, int val){
    int len=size(head);
    if(index==len){
        cout<<"Index "<<index<<" doesn't exist!"<<endl;
    }
    else{
    int count=0;
    Node* temp=head;
    while(count<index && count<len){
        count++;
        temp=temp->next;
    }
   
    temp->data=val;

    }
  
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

    cout<<"Its size is:"<<size(first)<<endl;

    insert(first,4);
    cout<<"LinkedList after adding 4 is:"<<endl;
    printLL(first); 
    cout<<"Its size is:"<<size(first)<<endl;

    deleteNode(first,1);
    cout<<"LinkedList after deleting the node at index 1 is:"<<endl;
    printLL(first);
    cout<<"Its size is:"<<size(first)<<endl;

    cout<<"The element at index 0 is:"<<getNode(first,0)<<endl;
    cout<<"The element at index 1 is:"<<getNode(first,1)<<endl;
    cout<<"The element at index 2 is:"<<getNode(first,2)<<endl;
    cout<<"The element at index 3 is:"<<getNode(first,3)<<endl;
    
    setNode(first,0,10);
    cout<<"After setting 10 at index 0:"<<endl;
    printLL(first);

    setNode(first,1,20);
    cout<<"After setting 20 at index 1:"<<endl;
    printLL(first);

    setNode(first,2,30);
    cout<<"After setting 30 at index 2:"<<endl;
    printLL(first);

    
    cout<<"After setting 40 at index 3:"<<endl;
    setNode(first,3,40);
    printLL(first);
    
    
    
    return 0;
}