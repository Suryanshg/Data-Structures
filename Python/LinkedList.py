# Class to implement a node in a Linked List
class Node:
    def __init__(self,data,next):
        self.data=data
        self.next=next

# Function to print a Linked List    
def printLL(head):
    temp=head
    while(temp!=None):
        print(str(temp.data)+"->",end="")
        temp=temp.next
    print("NULL")

# Function that returns the size of a Linked List
def size(head):
    temp=head
    count=0
    while(temp!=None):
        count+=1
        temp=temp.next
    return count

# Function to append a node in a Linked List
def insert(head, val):
    temp=head
    while(temp.next!=None):
        temp=temp.next
    newNode = Node(val,None);
    temp.next=newNode;

 # Function to delete a specified node in a Linked List, indexing starts from 0
def deleteNode(head, n):
    count=0
    temp=head
    while(count!=n-1):
        count=count+1
        temp=temp.next        
    temp.next=temp.next.next

    # Returns the node at a given index
def getNode(head,index):
    len=size(head)
    if(index>=len):
        return -1
    else:
        count=0
        temp=head
        while(count<index and count<len):
            count=count+1
            temp=temp.next
            
        return temp.data
     # Sets the node at a given index
def setNode(head,index,val):
    len=size(head)
    if(index>=len):
        print("Index "+str(index)+" doesn't exist!")
    else:
        count=0
        temp=head
        while(count<index):
            count+=1
            temp=temp.next
            
        temp.data=val
        
    
        
# Driver Code
if __name__=='__main__':
    third=Node(3,None)
    second=Node(2,third)
    first=Node(1,second)

    print("Original LinkedList is:")
    printLL(first)
    print("Its size is:"+str(size(first)))

    insert(first, 4);
    print("LinkedList after adding 4 is:")
    printLL(first);
    print("Its size is:"+str(size(first)))

    print("LinkedList after deleting the node at index 1 is:")
    deleteNode(first, 1)
    printLL(first)
    print("Its size is:"+str(size(first)))

    print("The element at index 0 is:"+str(getNode(first,0)))
    print("The element at index 1 is:"+str(getNode(first,1)))
    print("The element at index 2 is:"+str(getNode(first,2)))
    print("The element at index 3 is:"+str(getNode(first,3)))

    setNode(first,0,10)
    print("After setting 10 at index 0:")
    printLL(first)

    setNode(first,1,20)
    print("After setting 20 at index 1:")
    printLL(first)

    setNode(first,2,30)
    print("After setting 30 at index 2:")
    printLL(first)
 
    print("After setting 40 at index 3:")
    setNode(first,3,40)
    printLL(first)


    