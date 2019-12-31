#include <iostream>
using namespace std;

class Queue{
    public:
    int front,rear; // the front and rear element's index in the queue respectively
    int* arr; // the array that holds the elements of the queue
    int capacity; // the Max capacity of the queue  
    
    // Constructor
    Queue(int input=10){
        capacity=input;
        arr=new int[capacity];
        front=0;
        rear=0;
    }

    // Prints the Queue
    void printQ(){
        for(int i=0;i<rear;i++){
            cout<<"|"<<arr[i];
        }

        if (rear>0) cout<<"|";
        cout<<endl;
    }

    // Adds the element at the back of the queue
    void enqueue(int val){
        if(rear>=capacity){
            cout<<"Queue Overflow!"<<endl;
        }
        else{
            arr[rear]=val;
            rear++;
        }
    }

    // Removes the element at the back of the queue
    void dequeue(){
        if(rear==0){
            cout<<"Queue Underflow!"<<endl;
        }
        else{
            for(int i=0; i<rear-1;i++){
                arr[i]=arr[i+1];
            }
            rear--;
        }
    }

    // Returns the element in front
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    // Returns the element in rear
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[rear-1];
        }
    }

    // Checks whether queue is empty or not
    bool isEmpty(){
        return rear==0;
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
    cout<<"Initial Queue of capacity 5 is:"<<endl;
    Q->printQ();
    cout<<"Front: "<<Q->getFront()<<endl;
    cout<<"Rear: "<<Q->getRear()<<endl;

    cout<<"After adding 6 to the Queue: ";
    Q->enqueue(6);

    cout<<"After using dequeue:";
    Q->dequeue();
    Q->printQ();
    cout<<"Front: "<<Q->getFront()<<endl;
    cout<<"Rear: "<<Q->getRear()<<endl;

    cout<<"After using dequeue:";
    Q->dequeue();
    Q->printQ();
    cout<<"Front: "<<Q->getFront()<<endl;
    cout<<"Rear: "<<Q->getRear()<<endl;

    cout<<"After using dequeue:";
    Q->dequeue();
    Q->printQ();
    cout<<"Front: "<<Q->getFront()<<endl;
    cout<<"Rear: "<<Q->getRear()<<endl;

    cout<<"After using dequeue:";
    Q->dequeue();
    Q->printQ();
    cout<<"Front: "<<Q->getFront()<<endl;
    cout<<"Rear: "<<Q->getRear()<<endl;

    cout<<"After using dequeue:";
    Q->dequeue();
    Q->printQ();
    cout<<"Front: "<<Q->getFront()<<endl;
    cout<<"Rear: "<<Q->getRear()<<endl;

    cout<<"After using dequeue:";
    Q->dequeue();
    cout<<"Front: "<<Q->getFront()<<endl;
    cout<<"Rear: "<<Q->getRear()<<endl;
}