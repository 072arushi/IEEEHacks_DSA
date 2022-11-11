Binary Seaech Algoruthm is used to search an element from a sorted array of elements.

<*********************Start*********************>

Step 1: Declare the variables and  initialise all elements of an array in sorted order (ascending or descending).

Step 2: Divide the lists of array elements into halves.

Step 3: Now compare the target elements with the middle element of the array. And if the value of the target element is matched with the middle element, return the middle element's position and end the search process.

Step 4: If the target element is less than the middle element, we search the elements into the lower half of an array.

Step 5: If the target element is larger than the middle element, we need to search the element into the greater half of the array.

Step 6: We will continuously repeat steps 4, 5, and 6 till the specified element is not found in the sorted array.

<*********************Stop*********************>

Time Complexity: O(log n)
