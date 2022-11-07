In this problem, we will learn how to merge two arrays in C++ programming. 
You have to ask the user to enter the array 1 size and elements then size of the second array and elements to merge both thearray and store the merged result in the 
third array.

So to merge two arrays, start adding the element of the first array to the third array, after this start adding the elements of the second array to the third array.

Problem Description:

In this problem, we have to take two such arrays and merge them into one.
How? , you ask. Well, we all know that array is a non-dynamic data type ( the storage allocated to it cannot be changed during program execution.) 
So how are we gonna reallocate the size of the merged array? The answer is simple.
We don’t. We take a third array having double the size of the arrays so that both of them can fit in it.
And then we copy both the arrays one by one to the third array.

KADANES ALGORITHM
Given an integer array nums, find the subarray which has the largest sum and return its sum.