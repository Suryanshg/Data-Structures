#include <iostream>
using namespace std;




class Node{
    public:
    int data;
    Node* next;
    
};




void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

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

   
    insert(&first,4);
    printLL(first); 
    return 0;
}