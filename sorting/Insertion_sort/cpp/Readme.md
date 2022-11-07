INSERTION SORT

Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.
The array is virtually split into a sorted and an unsorted part.
Values from the unsorted part are picked and placed at the correct position in the sorted part.

Characteristics of Insertion Sort:
->Simple algorithm with simple implementation.
->Efficient for small data values.
->Adaptive in nature, i.e. it is appropriate for data sets which are already partially sorted.

Algorithm
->To sort an array of size N in ascending order: 
1)Iterate from arr[1] to arr[N] over the array. 
2)Compare the current element (key) to its predecessor. 
3)If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
