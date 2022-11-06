# Linked List Insertion Operations:
# 1.Insert at head
# 2.Insert at position
# 3.Insert at End

# Insert at Head:  
# new node is linked to the head node and then the new node becomes the head node.

# Insert at Position:  
# Since a linked list always begins with head node we start the traversal from head and continue till we find pos-1 node and link address of thst node new node and the address of the new nodeis linked to pos-1 element next element.

# Insert at End:  
# Since a linked list always begins with head node we start the traversal from head and continue till we find None. When None is found we link address og that node to the new node.  

# Example :
# Start with the empty list
# Insert 7 at tail.  So linked list  becomes 7->None.
# Insert 1 at the beginning. So linked list becomes 1->7->None
# Insert 4 at the position 2. So linked list becomes 1->4->7->None
# Insert 0 at the head. So linked list becomes 0->1->4->7->None
# Insert 8 at end, after 7. So linked list becomes 0 -> 1 -> 4-> 7-> 8-> None

# Time complexity: O(N) where N is size of given linked list
# Auxiliary space: O(1), it is not taking extra space