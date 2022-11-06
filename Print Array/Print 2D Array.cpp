/*Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 times…..(n-1)th row will be printed 1 time.
input:3 3
1 2 3
4 5 6
7 8 9
output:
1 2 3
1 2 3
1 2 3
4 5 6
4 5 6
7 8 9   */
//code:
#include <iostream>
void print2DArray(int **input, int row, int col) {  //initialising function
int i,j,k=0;
    for(i=0;i<row;i++)  //help to move to next row
        
    {  k=0;
     while(k<row-i){    //help to print row required no. of times
        for(j=0;j<col;j++)   //help to print the particular row
        {
            cout<<input[i][j]<<" ";
        }
        k++;
    cout<<endl;}
     
    }
}
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    int **input = new int*[row];   //dynamic allocation
    for(int i = 0; i < row; i++) {
	    input[i] = new int[col];
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];   //printing array
	    }
    }
    print2DArray(input, row, col);    //calling function
}
