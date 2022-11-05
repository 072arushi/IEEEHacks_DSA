#include<iostream>
using namespace std;

void bubbleSort(int *input, int n){
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(input[j]>input[j+1]){
                //swapping element
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
            else{
                continue;
            }
        }
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int input[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the data value";
        cin>>input[i];
    }

    // calling the sorting function
    bubbleSort(input,size);

    cout<<endl;
    //printing the sorted array
    for(int i=0;i<size;i++){
        cout<<input[i]<<" ";
    }

    return 0;
}
