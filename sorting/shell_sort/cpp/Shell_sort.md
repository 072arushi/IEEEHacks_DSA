

#                                                       SHELL SORT                                  

* Shell sort is a improved version of insertion sort
*  In insertion sort we initial consider the first item to be sorted then the remaining array is searched sequentially and unsorted items are moved and inserted into the sorted sub-list at correct position.
* Shell sort was introduced by Donald Shell to improve the complexity of insertion sort.
* In shell sort the method begins by sorting pairs of elements far apart from each other, then gradually narrows the gap between elements to be compared.
Advantage of shell sort is that some far apart elements can be moved into position faster than what a simple nearest neighbor exchange would, by starting with far apart elements.
This algorithm uses insertion sort on widely spread elements to sort them and then sort the less widely spaced elements. This spacing is termed as the interval.

* To find the interval gap in which shell sort is applied we use <b> Knuth's Formula </b> :<br>
   i = i * 3 + 1 , Where i is the interval with a starting value of 1.

## Algorithm
1.) decide interval i.<br>
2.)Separate the list into sub-lists with the i interval.<br>
3.)Using insertion sort, sort these sub-lists.<br>
4.) reduce the interval and Continue until the entire list has been sorted.<br>

## Time and space complexities
<b>Time complexity = O(n^2)</b><br>
<b>Space complexity = O(1)</b>
<br><br>
<b>for more reference checkout - </b> 
[Shell_Sort](https://www.geeksforgeeks.org/shellsort/)
