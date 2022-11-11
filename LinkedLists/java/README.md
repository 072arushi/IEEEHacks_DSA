### Inserting at beginning

    1. Create a new node (here temp)
    2. Link this newly created node to head
    3. Now head points to this newly created node  
        $if we did step 3 before step 2 we would have lost the access to the existing node$

### Inserting at end
    1. If List is empty , we add the newly defined node at starting
    2. We define a new node that points to head to traverse to the last element (temp.next!=null) before "null" appears at the end of the Linked List 
        $ We do not use "head" as we will lose access to elements head previously points when we update the head $
    3. Last element is linked to the node to be inserted 
    4. This now points to null

### Traversing List
    1.If list is empty , nothing is printed
    2. We define a new node that points to head to traverse to the last element (temp.next!=null) before "null" appears at the end of the Linked List 
        $ We do not use "head" as we will lose access to elements head previously points when we update the head $
    3. We print every element we access.

### Delete at Begin
    1.If list is empty , nothing is printed or added, we simply return.
    2.Else head points to its next element
        $Here we don't have to create a new node as we intend to delete the value at begin that means we want to lose access of the first node$
    
### Reverse 
In first iteration
          head
    null  ____   ->   ____  ->  ____  -> null 
    Prev  curr
    frwd

In second iteration
           
    null   ____   ->   ___  -> null
    prev   curr        frwd

    then,

    null  <-  ____     ___  -> null
    prev      curr     frwd

    then,

    null  <-  ____  <-   ___  -> null
              prev      curr    frwd

and finally

null  <-  ____  <-   ___    null
                     prev    curr    



