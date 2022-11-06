PRINT 2D ARRAY:
In this ques we have given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 times…..(n-1)th row will be printed 1 time.
Input:
3 3
1 2 3
4 5 6
7 8 9
Output:
1 2 3
1 2 3
1 2 3
4 5 6
4 5 6
7 8 9
Algorithm:
1.Make a function print2DArray with integer input array, no. of rows and no. of columns as a parameter
2.Start a for loop with i=0 till i<row and initialise a variable k=0
3.Inside for loop start a while loop till k<row-i and inside it start for loop with variable j till j<column(j loop helps to print each row and while loop helps to print the row multiple times and i loop is taking care to shift to next row)
4.Inside j loop print the matrix element
5.Now call the function inside main
6.Your 2-d array will be printed.
