
# Merge Sort

A sorting algorithm is used to arrange elements of an array/list in a specific order. 
![11](https://www.programiz.com/sites/tutorial2program/files/merge-sort-example_0.png)

## Theory of Merge Sort
1. Using the Divide and Conquer technique, we divide a problem into subproblems. When the solution to each subproblem is ready, we 'combine' the results from the subproblems to solve the main problem.

2. Split the array into 2 parts. If index q is the half-way point between p and r, then we can split the subarray A[p..r] into two arrays A[p..q] and A[q+1, r].

3. We try to sort both the subarrays A[p..q] and A[q+1, r]. If we haven't yet reached the base case, we again divide both these subarrays and try to sort them.

4. When the conquer step reaches the base step and we get two sorted subarrays A[p..q] and A[q+1, r] for array A[p..r], we combine the results by creating a sorted array A[p..r] from two sorted subarrays A[p..q] and A[q+1, r].

## Working of Merge Sort

1. Example of an unsorted array
![1](https://www.programiz.com/sites/tutorial2program/files/merge-sort-demo-step-1.png)

2. Check the Base case. If size is 0 or 1, return the function.

3. Calculate the mid point using the size of the array.

4. Call the MergeSort function on the sorted array. Once the function returns, call the helper function(merge) on the returned array. This helper function takes in the first array, size of that array, second array, size of that array and an empty array.

5. In that helper function we are merging two sorted array in the empty array.
![2](https://www.programiz.com/sites/tutorial2program/files/merge-sort-demo-step-4.png)

6. After the new merged array is returned, we will put its element to our actual array and hence, get the actual array sorted.


