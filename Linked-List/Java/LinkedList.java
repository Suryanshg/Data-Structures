class LinkedList {

    // Function to print a Linked List
    void printLL(Node head){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+"->");
            temp=temp.next;
        }
        System.out.print("NULL\n");
    }

    // Function to append a node in a Linked List
    void insert(Node head, int val){
        Node temp=head;
        while(temp.next!=null){
            temp=temp.next;
        }
        Node newNode = new Node(val,null);
        temp.next=newNode;
    }

    // Function to delete a specified node in a Linked List, indexing starts from 0
    void deleteNode(Node head, int n){
        int count=0;
        Node temp=head;
        while(count!=n-1){
            count++;
            temp=temp.next;
        }
        temp.next=temp.next.next;
    }
    
    // Function that returns the size of the LinkedList
    int size(Node head){
        Node temp=head;
        int count=0;
        while(temp!=null){
            count++;
            temp=temp.next;
        }
        return count;
    }

    // Returns the node at a given index
    int getNode(Node head,int index){
        int len=size(head);
        if(index>=len){
            return -1;
        }
        else{
            int count=0;
            Node temp=head;
            while(count<index && count<len){
                count++;
                temp=temp.next;
            }
            return temp.data;
        }
    }  

    // Sets the node at a given index
    void setNode(Node head,int index, int val){
        int len=size(head);
        if(index>=len){
            System.out.println("Index "+index+" doesn't exist!");
        }
        else{
            int count=0;
            Node temp=head;
            while(count<index){
                count++;
                temp=temp.next;
            }
            temp.data=val;
        }
    }

    //Function to reverse a LinkedList
    void reverse(Node head){
        int len=size(head);
        for(int i=0;i<len/2;i++){
            int temp=getNode(head,i);
            setNode(head,i,getNode(head,len-1-i));
            setNode(head,len-1-i,temp);
        }       
    }

    // Driver Code 
    public static void main(String[] args) {
        System.out.println("Original LinkedList is:");
        
        Node third = new Node(3,null);
        Node second = new Node(2,third);
        Node first= new Node(1,second);

        LinkedList LL=new LinkedList();
        LL.printLL(first);
        System.out.println("Its size is:"+LL.size(first));
        
        LL.insert(first, 4);
        System.out.println("LinkedList after adding 4 is:");
        LL.printLL(first);
        System.out.println("Its size is:"+LL.size(first));

        System.out.println("Reversing this LinkedList:");
        LL.reverse(first);
        LL.printLL(first);

        System.out.println("LinkedList after deleting the node at index 1 is:");
        LL.deleteNode(first, 1);
        LL.printLL(first);
        System.out.println("Its size is:"+LL.size(first));

        System.out.println("The element at index 0 is:"+LL.getNode(first,0));
        System.out.println("The element at index 1 is:"+LL.getNode(first,1));
        System.out.println("The element at index 2 is:"+LL.getNode(first,2));
        System.out.println("The element at index 3 is:"+LL.getNode(first,3));

        LL.setNode(first,0,10);
        System.out.println("After setting 10 at index 0:");
        LL.printLL(first);

        LL.setNode(first,1,20);
        System.out.println("After setting 20 at index 1:");
        LL.printLL(first);

        LL.setNode(first,2,30);
        System.out.println("After setting 30 at index 2:");
        LL.printLL(first);

    
        System.out.println("After setting 40 at index 3:");
        LL.setNode(first,3,40);
        LL.printLL(first);

    }

    
}

// Class to implement a node in a Linked List
class Node{
    int data;
    Node next;

    Node(int val,Node nextNode){
        this.data=val;
        this.next=nextNode;
    }
}




    

