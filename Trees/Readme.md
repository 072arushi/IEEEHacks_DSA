-> create a Node class consisting of data , left pointer and a right pointer

-> create Node constructor in Node class making data equal to the input data the left and right     pointer as null

-> creating a function build tree
    -> first we input data 
        -> if the data is -1 we return NUll which means that we have reached a leaf node i.e a node whic has no childres
        
        -> if not we create a new node with data as the value of node 

        -> then we first take input or the left tree

        -> then the right tree

        -> return root

-> creating a function for level order traversal
    -> we use queue logic for implementation of level order traversal
    -> first we push root->data to the queue and then NULL
    -> NULL means the end of a specific level
    -> if we encounter null we move on to the next level making sure the queue is still not empty
    -> if the queue is not empty, we print the front of the queue 
    -> then we push the value of left child to the queue making sure it is not null
    -> repeat the above step with right child

-> we have successfully printed the level order traversal of the tree    