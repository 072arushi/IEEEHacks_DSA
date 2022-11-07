// Insertion Sort code in C++

#include <iostream>
using namespace std;

// function declaration
void insertionSort(int *input, int size)
{
   for(int i=1;i<size;i++) {
       int current=input[i];
       int j;
//      shifting elements
       for(j=i-1;j>=0;j--) {
           if(current<input[j]) {
               input[j+1]=input[j];
           }
           else {
               break;
           }
       }
       input[j+1] = current;
   }
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
//  taking the size of the input array
		int size;
		cin >> size;
		int *input = new int[size];
    
// taking the input
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
    
// calling the function
		insertionSort(input, size);
    
// printing the output
		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}
