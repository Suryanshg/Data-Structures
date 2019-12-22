#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
};

class LinkedList{
    public:
    Node* node;

    LinkedList(int val){
        node->data=val;
        node->next=NULL;
    }

    void printLL(){
        Node* iter=node;
        while(!iter){
            cout<<iter->data<<endl;
            iter=iter->next;
        }
    }

};




// Driver code
int main(){
    LinkedList LL=LinkedList(1);
    cout<<LL.node->data<<endl;
    cout<<LL.node->next<<endl;
    return 0;
}