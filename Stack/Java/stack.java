class stack {
    int arr[]; // The array that holds the stack
    int capacity; // Max Capacity of the stack
    int size; // The number of elements in the current stack
    int top; // The top element of the array
    
    // Constructor
    stack(int input){
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

    //Checks if the stack is empty or not
    boolean isEmpty(){
        return size==0;
    }

    // Pops the topmost element
    void pop(){
        if(isEmpty()){
            System.out.println("Stack is empty. Nothing can be popped.");
        }
        else{
            System.out.println("Popped " + arr[size-1]);
            arr[size-1]=0;
            size--;
            top=arr[size-1];
        }
    }
    
    
    
    
    // Driver Code
    public static void main(String[] args) {
        stack S=new stack(5);
        S.push(1);
        S.push(2);
        S.push(3);
        S.push(4);
        S.push(5);
        System.out.println("The initial stack is:");
        S.printStack();
       
        System.out.print("Stack after pushing 6 is: ");
        S.push(6);

        System.out.println("Is the stack empty?: "+S.isEmpty());

        S.pop();
        System.out.println("Stack after using pop is:");
        S.printStack();
    }
}