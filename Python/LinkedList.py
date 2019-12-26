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

# Driver Code
if __name__=='__main__':
    third=Node(3,None)
    second=Node(2,third)
    first=Node(1,second)

    print("Original LinkedList is:")
    printLL(first)
    print("Its size is:"+str(size(first)))


    