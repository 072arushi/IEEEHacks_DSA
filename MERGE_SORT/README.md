> # Merge Sort :grinning:
<br>

## Illustration: :thinking:
<br>

To know the functioning of merge sort, lets consider an array **arr[] = {38, 27, 43, 3, 9, 82, 10}**
<br>

- At first, check if the left index of array is less than the right index, if yes then calculate its mid point
<br>

![This is an image](https://media.geeksforgeeks.org/wp-content/uploads/20220525094221/Artboard71-300x150.jpg)
<br>

- Now, as we already know that merge sort first divides the whole array iteratively into equal halves, unless the atomic values are achieved. 
<br>

- Here, we see that an array of 7 items is divided into two arrays of size 4 and 3 respectively.
- <br>

![This is an image](https://media.geeksforgeeks.org/wp-content/uploads/20220525094248/Artboard711-300x150.jpg)
<br>

- Now, again find that is left index is less than the right index for both arrays, if found yes, then again calculate mid points for both the arrays.
<br>
<BR>
  
![This is an image](https://media.geeksforgeeks.org/wp-content/uploads/20220525094314/Artboard721-300x150.jpg)

<br>
  
- Now, further divide these two arrays into further halves, until the atomic units of the array is reached and further division is not possible.
<br>
  
<BR>
  
![This is an image](https://media.geeksforgeeks.org/wp-content/uploads/20220525094341/Artboard731-300x150.jpg)

<br>
  
- After dividing the array into smallest units, start merging the elements again based on comparison of size of elements
  
<br>
  
- Firstly, compare the element for each list and then combine them into another list in a sorted manner.
  
 <br>

![This is an image](https://media.geeksforgeeks.org/wp-content/uploads/20220525094403/Artboard741-300x150.jpg)
<br>
  
- After the final merging, the list looks like this:
<br>

![This is an image](https://media.geeksforgeeks.org/wp-content/uploads/20220525094459/Artboard751-300x150.jpg)
  
<br>

> ## FINAL DIAGRAM
  
 <BR>
  
![This is an image](https://media.geeksforgeeks.org/wp-content/uploads/20220722205737/MergeSortTutorial.png)
   <BR>
     <BR>
       
>  :relieved:




