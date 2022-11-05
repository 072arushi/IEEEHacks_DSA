void bubbleSort(int *input, int n){
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(input[j]>input[j+1]){
                //swapping element
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
