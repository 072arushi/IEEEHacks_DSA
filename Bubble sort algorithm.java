________________________________________BUBBLE SORT ALGORITHM____________________________________________________
Bubble Sort is a simple algorithm which is used to sort a given set of n elements provided in form of an array with n number of elements. Bubble Sort compares all the element one by one and sort them based on their values.

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52

Approach: 
Repeatedly swap 2 adjacent elements if arr[j] > arr[j+1] .
Here, the maximum element of the unsorted array reaches the end of the unsorted array after each iteration.
Unlike selection sort, here, sorting is done from the back as shown in the dry run.
 After (N-1) iterations , we get a sorted array.
 
 <code>
 public class bubble_sort {
  public static void main(String args[]) {
    int arr[] = {13,46,24,52,20,9};
    int n = arr.length;
    System.out.println("Before Using Bubble Sort: ");
    for(int i=0;i<6;i++)
    {
        System.out.print(arr[i]+" ");
    }
    System.out.println();
    // bubble sort
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }

    System.out.println("After bubble sort: ");
    for (int i = 0; i < n; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
  }

}   
Before Using Bubble Sort:
13 46 24 52 20 9
After Using bubble sort:
9 13 20 24 46 52

t.c-Time Complexity: O(n^2), (nested for loop)
 


