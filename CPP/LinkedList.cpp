#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
};

class LinkedList{
    public:
    Node* head;

    LinkedList(int val){
        head->data=val;
        head->next=NULL;
    }

    void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }

};




// Driver code
int main(){
    LinkedList LL=LinkedList(1);
    LL.printLL();
    return 0;
}