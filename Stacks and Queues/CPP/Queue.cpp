#include <iostream>
using namespace std;

class Queue{
    public:
    int front,rear; // the front and rear elements in the queue respectively
    int* arr; // the array that holds the elements of the queue
    int capacity; // the Max capacity of the queue  
    int size; // the number of elements in the Queue

    // Constructor
    Queue(int input=10){
        capacity=input;
        arr=new int[capacity];
        size=0;
        front=-1;
        rear=-1;
    }

    // Prints the Queue
    void printQ(){
        for(int i=0;i<size;i++){
            cout<<"|"<<arr[i];
        }
        cout<<"|"<<endl;
    }

    // Adds the element at the back of the queue
    void enqueue(int val){
        if(size>=capacity){
            cout<<"Queue Overflow!"<<endl;
        }
        else{
            arr[size]=val;
            rear=val;
            if(size==0){front=val;}
            size++;
        }
    }

};

// Driver Code
int main(){
    Queue* Q=new Queue(5);
    Q->enqueue(1);
    Q->enqueue(2);
    Q->enqueue(3);
    Q->enqueue(4);
    Q->enqueue(5);
    cout<<"Initial Queue is:"<<endl;
    Q->printQ();

}