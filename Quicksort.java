--------------------------------------------------------------Quicksort Algorithm----------------------------------------------------
  It is a divide and conquer algorithm which can be used to sort an array of elements. An element is chosen ( namely as the pivot ) and the partition of the array is done to the left and the right of the pivot.
-> Pivot can be chosen in 4 different ways : 
1.	Median of Array
2.	First element of the Array
3.	Last element of the Array
4.	Any Random element of the Array
	the Main process of Quicksort is Partition. Once we decide on our pivot, we will put all values smaller than or equal to pivot in the left half and all the values greater than pivot in the right half of the pivot.
	This means the pivot will be at its final sorted position after this process ends. Now we will recursively call to the left and right of the pivot so that the rest of the array also gets sorted. 
	The main intention of this process is to place the pivot at its final position, this is the position where the pivot will be in the final sorted array.

Pseudo code for partition()  

This function takes last element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot 
partition (arr[], low, high)
{
    // pivot (Element to be placed at right position)
    pivot = arr[high];  
    i = (low – 1)  // Index of smaller element and indicates the 
    // right position of pivot found so far
    for (j = low; j <= high- 1; j++){
        // If current element is smaller than the pivot
        if (arr[j] < pivot){
 i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i + 1] and arr[high])
    return (i + 1)
}
Approach : 
-> here we consider 2 pointers namely I initialize at 0 index and j initialise at index n-1(n is length of array.
-> swap arr[i] and arr[j] if  arr[i] > pivot  and arr[j] < pivot  and will increment i and decrement j . This goes on until i < j . 
-> Finally when i > j, stop swapping arr[i] and arr[j] and swap pivot with arr[j] for getting pivot its final position.
-> recursively repeat 2 AND 3 step in the left and right of the pivot so that we get our final sorted array.
<code> 
import java.util.*;

class Solution{

  static int partition(int arr[], int low , int high){
    int pivot = arr[low]  ;
    int i = low ;
    int j = high ;

    while (i < j) {

      while (arr[i] <= pivot && i <= high - 1) {
        i++  ;
      }

      while (arr[j] > pivot && j >= low) {
        j-- ;
      }

      if (i < j){
        int t = arr[i]  ; 
        arr[i] = arr[j]  ; 
        arr[j] = t ; 
      }
    }

    int t = arr[j]  ; 
    arr[j] = arr[low]  ; 
    arr[low] = t ; 

    return j ;
  }

  static void quicksort(int arr[] , int low, int high){
    
    if (low < high) {

      int pivot = partition(arr, low, high) ;
      quicksort(arr, low, pivot - 1)  ;
      quicksort(arr, pivot + 1, high)  ;
    
    }

  }
  public static void main(String[] args) {
    
    int n=8 ; 
    int arr[] = {4, 6, 2, 5, 7, 8, 1, 3}  ; 
    System.out.println("Before Quick Sort: ");
     for(int i=0; i < n ;i++){
      System.out.print(arr[i]+" ")  ; 
    }
    System.out.println();
    quicksort(arr,0,n-1)  ; 

    System.out.println("Sorted Array: ") ; 
    for(int i=0; i < n ;i++){
      System.out.print(arr[i]+" ")  ; 
    }
  }
}
Output:
Before Quick Sort:
4 6 2 5 7 8 1 3
After Quick Sort:
1 2 3 4 5 6 7 8
Time Complexity : 
Following recurrence relation can be written for Quick sort : 
F(n) = F(k) + F(n-1-k) [k is the number of elements smaller or equal to pivot and n-1-k denotes elements greater than the pivot]
Possible cases can be happens;
Worst case: when pivot is the greatest or smallest element of the array. then the worst case would be either increasing order of the array or decreasing order of the array.
t.c-Worst Case : O(n^2) 
Best case: when pivot is the middle element of the array. 
t.c-Best Case: O(nLogn)
                                                                                            
                                                                                            
                                                                                            
                                                                                      
Thank you!
