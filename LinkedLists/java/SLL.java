package LinkedLists.java;

public class SLL {
    static Node head;
    class Node{
        int data;
        Node next;

        Node(int x){
            data  = x ;
            next = null;
        }
    }

    public void insertAtBegin(int x ){
        Node temp = new Node(x);     //taking the value to be inserted
        temp.next = head;           
        head = temp;                 //head points to newly added node
    }
    public void insertAtEnd(int x){
        Node newNode =new Node (x);
        if (head==null){            // checking if list is empty
            head = newNode; 
            return;
        }
        Node temp = head;

        while (temp.next!=null){    
            temp = temp.next;
        }
        temp.next = newNode;
        newNode.next = null;
    }

    public void display (){
        if (head == null){
            System.out.println("Empty list");
            return ;
        }
        Node temp = head ;
        while (temp != null){
            System.out.print(temp.data + "->");
            temp = temp.next;

        }
        System.out.println("NULL");
        
    }
    public void delAtBegin (Node head){
        if (head== null){
            return;
        }
        else{
            head = head.next;
        }          

    }

    public Node reverse (Node node){
        Node curr , prev , frwd ;  //creating 3 nodes
        prev =null;                         
        frwd = null;
        curr = node;
    
        while(curr!= null){
            frwd = curr.next;
            curr.next=prev;
            prev = curr;
            curr = frwd;
        }
        node = prev;
        return node;
    

    }
    
    public static void main (String [] args){
        SLL list = new SLL();
        list.insertAtBegin(1);
        list.insertAtBegin(2);
        list.insertAtEnd(0);
        
        head = list.reverse(head);
        list.display();


    }
   
}

    
   