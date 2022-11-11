/* program to find the specified element from the sorted array using the binary search in C++. */  
#include <iostream>  
using namespace std;  
/* create user-defined function and pass different parameters: 
arr[] - it represents the sorted array; 
num variable represents the size of an array; 
tgt variable represents the target or specified variable to be searched in the sorted array. */  
int bin_search (int arr[], int num, int tgt)  
{  
    int beg = 0, end = num - 1;  
    // use loop to check all sorted elements  
    while (beg <= end)  
    {  
        /* get the mid value of sorted array and then compares with target element. */  
        int mid = (beg + end) /2;         
        if (tgt == arr[mid])  
        {  
            return mid; // when mid is equal to tgt value  
        }         
        // check tgt is less than mid value, discard left element  
        else if (tgt < arr[mid])  
        {  
            end = mid - 1;  
        }         
        // if the target is greater than the mid value, discard all elements  
        else {  
            beg = mid + 1;  
        }  
    }  
    // return -1 when target is not exists in the array  
    return -1;  
}  
int main ()  
{  
    // declaration of the arrays  
    int arr[] = {5,10, 15, 20, 25, 30, 37, 40};  
    int tgt; // specified the target element  
    cout<<"\nEnter The element to be searched : ";
    cin>>tgt;   
    int num = sizeof (arr) / sizeof (arr[0]);  
    // declare pos variable to get the position of the specified element  
    int pos = bin_search (arr, num, tgt);     
    if (pos != -1)  
    {  
        cout << " Element is found at index " << (pos)<< endl;  
    }  
    else  
    {  
        cout << " Element is not found in the array" << endl;  
    }  
    return 0;  
}  