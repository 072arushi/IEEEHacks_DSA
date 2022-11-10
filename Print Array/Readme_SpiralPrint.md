Spiral Print in 2d Array

example
-> if our array is
    -> 1 2 3
       4 5 6
       7 8 9
-> then its spiral print is -> 1 2 3 6 9 8 7 4 5

Algorithm
-> we can see that first we print -> starting Row -> ending Col -> ending Row -> starting Col
-> we make a while loop and run it until we have traversed all the elements
-> then first we traverse the starting Row
        -> We see that starting Row varies from starting column to the ending column and store all elements in a vector along with increasing the count of the traversed elements
        -> then we increase the starting Row
-> then we perform similar opeartions for ending Col -> ending Row -> starting Row
-> then we print the vector to get the spiral print for the given 2D array        