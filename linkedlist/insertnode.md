ALGORITHM

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.
Insertion of new node to ith position can be done in any ways.here it is done recursively.


## Take input function
To take input from user ,of data and the position at which user want to place the node
     ALGORITHM:
     begin
     cin data;
     head=NULL tail=NULL(initial condition)
     if head=NULL then point head and tail at newnode
     else tail->next =newnode;
     teil = tail->next
     return head
     end

## insert node 
which contain head , position at which node is to be added and data.

## BASE CASE :
When head is NULL this means there is no node in linked list in this case simply return head.

  ALGORITHM:
  if head==NULL then return head;  


## Implementation on small part.
Check if i is 0 it means insertion at head , put address of head in the next of newnode and then update head.
https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/types-of-linked-list-and-operation-on-linked-list-insert-begin-c5d6d8aebb19c584.png

ALGORITHM:

 if i==0 then 
 newnode->next = head;
 head= newnode;
 return head;


## RECURSION CALL

Recursion call on rest of the node 

Node *smallans =insertNode(head->next , i-1 , data) 
   
Now start repeating above steps from head->next and now ith position become (i-1) and data to be insert remain same .

After solving smallans now put address of smallans in next of head so that part on which recusion call is made get attached with head.
ALGORITHM:
head->next = smallans.
retutn head.
https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/types-of-linked-list-and-operation-on-linked-list-insert-after-5628be6cb96413e0.png

## Print function
Make node name temp which is pointing on head.
till  temp is not null cout data of each temp and move temp to next index.
ALGORITHM:

while temp!=NULL ;
cout<<temp->data<<;
temp = temp->next;

## Time Complexity: 
O(N) where N is the size of the given linked list

## Spce Complexity: 
O(N) for call stack since using recursion

EXAMPLE:
Input: list = 1->2->3->4->5->6->7, node = (val=100,next=null), position = 4 (i.e i) 
Output: 1->2->3->100->4->5->6->7