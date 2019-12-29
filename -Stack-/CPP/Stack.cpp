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

    //Checks if the stack is empty or not
    bool isEmpty(){
        return size==0;
    }

    // Pops the topmost element
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty. Nothing can be popped."<<endl;
        }
        else{
            cout<<"Popped "<< arr[size-1]<<endl;
            arr[size-1]=0;
            size--;
            top=arr[size-1];
        }
    }

    // Peeks the topmost element
    int peek(){
        if(isEmpty()){
            cout<<"Stack is empty."<<endl;
            return -1;
        }
        else{
            return top;
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
    S->push(5);
    cout<<"The initial stack is:"<<endl;
    S->printStack();
   
    cout<<"Stack after pushing 6 is: ";
    S->push(6);

    cout<<"Is the stack empty?: "<<(S->isEmpty()==0?"No":"Yes")<<endl;

    S->pop();
    cout<<"Stack after using pop is:"<<endl;
    S->printStack();

    cout<<"Peek: "<<S->peek()<<endl;
    S->pop();
    cout<<"Peek: "<<S->peek()<<endl;
    S->pop();
    cout<<"Peek: "<<S->peek()<<endl;
    S->pop();
    cout<<"Peek: "<<S->peek()<<endl;
    S->pop();
    cout<<"Peek: "<<S->peek()<<endl;
    S->pop();

    return 0;
}