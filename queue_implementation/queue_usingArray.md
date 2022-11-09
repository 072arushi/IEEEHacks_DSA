A queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.

We define a queue to be a list in which all additions to the list are made at one end(rear end), and all deletions from the list are made at the other end(front end)

Array implementation of Queue-
To implement a queue using an array, 

1.create an array arr of size n

2.Take two variables front and rear with front initialised as -1 which means the queue is currently empty and rear to be initialised by 0.

Now, some of the implementations of queue operations are as follows: 

Enqueue():Addition of an element to the queue. 
Adding an element will be performed after checking whether the queue is full or not. If rear < n which indicates that the array is not full then store the element at arr[rear] and increment rear by 1 but if rear == n then it is said to be an Overflow condition as the array is full.

Dequeue(): Removal of an element from the queue. 
An element can only be deleted when there is at least an element to delete i.e. rear > 0. Now, the element at arr[front] can be deleted but all the remaining elements have to shift to the left by one position in order for the dequeue operation to delete the second element from the left on another dequeue operation.

Front(): 
Get the front element from the queue i.e. arr[front] if the queue is not empty.

Display():
Print all elements of the queue. If the queue is non-empty, traverse and print all the elements from the index front to rear.