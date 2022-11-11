//                                    SHELL SORT code
//                                    ===============
// CODE : 

#include <iostream>
using namespace std;

void shellsortalgorithm(int array[], int number){
    int i, j, k, temp;
    for (i = number / 2; i > 0; i = i / 2){
        for (j = i; j < number; j++){
            for (k = j - i; k >= 0; k = k - i){
                if (array[k + i] >= array[k])
                    break;
                else
                {
                    temp = array[k];
                    array[k] = array[k + i];
                    array[k + i] = temp;
                }
            }
        }
    }
    return;
}

int main(){

    int array[100];
    int k, values;
    cout<<"Enter total no. of elements : ";
    cin>>values;
    cout<<"\nEnter the values: ";

    for (k = 0; k < values; k++){
        cin>>array[k];
    }

    shellsortalgorithm(array, values);

    cout<<"\nArray after the sorting: ";
    for (k = 0; k < values; k++)
        cout<<array[k]<<" ";

    return 0;
}
