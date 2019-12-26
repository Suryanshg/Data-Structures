class Node:
    def __init__(self,data,next):
        self.data=data
        self.next=next
    
def printLL(head):
    temp=head
    while(temp!=None):
        print(str(temp.data)+"->",end="")
        temp=temp.next
    print("NULL")
    
if __name__=='__main__':
    third=Node(3,None)
    second=Node(2,third)
    first=Node(1,second)

    print("Original LinkedList is:")
    printLL(first)


    