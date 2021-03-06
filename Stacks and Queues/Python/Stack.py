class Stack:
    # Constructor
    def __init__(self,input):
        self.capacity=input # Max Capacity of the stack
        self.size=0 # The number of elements in the current stack
        self.arr=[] # The array that holds the stack
        self.top=-1 # The top element of the array
    
    #  Prints the stack
    def printStack(self):
        count=self.size-1
        while (count>=0):
            print("|"+str(self.arr[count])+"|")
            count-=1
        print("---")
    
    # Pushes an element at the top of the stack
    def push(self,val):
        if(self.size>self.capacity-1):
            print("Stack Overflow")
        else:
            self.arr.append(val)
            self.top=val
            self.size+=1
    
    # Checks if the stack is empty or not
    def isEmpty(self):
        return self.size==0
    
    # Pops the topmost element
    def pop(self):
        if(self.isEmpty()):
            print("Stack is empty. Nothing can be popped.")
        else:
            print("Popped " + str(self.arr[self.size-1]));
            self.arr.pop(self.size-1);
            self.size-=1;
            if(self.isEmpty()):
                self.top=-1
            else:
                self.top=self.arr[self.size-1];
    
    # Peeks the topmost element
    def peek(self):
        if(self.isEmpty()):
            print("Stack is empty.")
            return -1
        else:
            return self.top
            
# Driver Code
if __name__=='__main__':
    S=Stack(5)
    S.push(1)
    S.push(2)
    S.push(3)
    S.push(4)
    S.push(5)
    print("The initial stack is:")
    S.printStack()

    print("Stack after pushing 6 is: ",end="")
    S.push(6)

    print("Is the stack empty?: "+str(S.isEmpty()))

    S.pop()
    print("Stack after using pop is:")
    S.printStack()

    print("Peek: "+str(S.peek()))
    S.pop()
    print("Peek: "+str(S.peek()))
    S.pop()
    print("Peek: "+str(S.peek()))
    S.pop()
    print("Peek: "+str(S.peek()))
    S.pop()
    print("Peek: "+str(S.peek()))
    S.pop()
