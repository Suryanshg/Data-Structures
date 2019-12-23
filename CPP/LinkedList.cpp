#include <iostream>
using namespace std;

void printLL();


class Node{
    public:
    int data;
    Node* next;
    
};


void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
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

    printLL(first); 
    return 0;
}