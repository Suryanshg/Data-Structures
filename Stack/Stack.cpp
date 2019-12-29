#include <iostream>
using namespace std;

class Stack{
    public:
    int* arr; // The array that holds the stack
    int size; // The number of elements in the current stack
    int top; // The top element of the array
    int capacity; // Max Capacity of the stack

    // Constructor
    Stack(int input=10){
        capacity=input;
        size=0;
        arr=new int[capacity];
        top=-1;
    } 

    // Prints the stack
    void printStack(){
        int count=size-1;
        while (count>=0){
            cout<<"|"<<arr[count]<<"|"<<endl;
            count--;
        }
        cout<<"---"<<endl;
    }

    // Pushes an element at the top of the stack
    void push(int val){
        if(size>capacity-1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            arr[size]=val;
            top=val;
            size++;
        }
    }




};

// Driver Code
int main(){
    Stack* S=new Stack(5);
    S->push(1);
    S->push(2);
    S->push(3);
    S->push(4);
    S->push(10);
    cout<<"The initial stack is:"<<endl;
    S->printStack();
   
    cout<<"Stack after pushing 6 is:"<<endl;
    S->push(6);
    

}