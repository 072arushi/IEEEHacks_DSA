REMOVE X USING RECURSION:
In this ques we have to remove all the x present in the string using recursion 
Test cases:
Input:xxxx
Output:
Input:xabxc
Output:abc
Algorithm:
1.Create removeX function taking char input[] array as parameter
2.Calculate length of string using strlen function
3.Here the base case is len>0
4.If input[0]==x then apply a for loop and shift the array one position back
5.Now if at index 0 x is still present then pass the same input array and recursively call the function
6.Else recursively call the function and pass the parameter as input+1.Basically now input[1] of original array will be input[0] of new input array.
7.Now call the function in main.
8.All x from string are removed now
