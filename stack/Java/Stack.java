package stack.Java;

class Stack {
    int arr[]; // The array that holds the stack
    int capacity; // Max Capacity of the stack
    int size; // The number of elements in the current stack
    int top; // The top element of the array
    
    // Constructor
    Stack(int input){
        capacity=input;
        size=0;
        arr=new int[capacity];
        top=-1;
    }

    // Prints the stack
    void printStack(){
        int count=size-1;
        while (count>=0){
            System.out.println("|"+arr[count]+"|");
            count--;
        }
        System.out.println("---");
    }

    // Pushes an element at the top of the stack
    void push(int val){
        if(size>capacity-1){
            System.out.println("Stack Overflow");
        }
        else{
            arr[size]=val;
            top=val;
            size++;
        }
    }

    
    
    
    
    // Driver Code
    public static void main(String[] args) {
        Stack S=new Stack(5);
        S.push(1);
        S.push(2);
        S.push(3);
        S.push(4);
        S.push(5);
        System.out.println("The initial stack is:");
        S.printStack();
       
        System.out.print("Stack after pushing 6 is: ");
        S.push(6);
    }
}