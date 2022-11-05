void merge(int *arr1, int size1, int *arr2, int size2, int *ans){
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if (arr1[i] < arr2[j]){
            ans[k] = arr1[i];
            i++;
            k++;
        }
        else{
            ans[k] = arr2[j];
            k++;
            j++;
    	}
    }
    while (i < size1){
        ans[k] = arr1[i];
        k++;
        i++;
    }
    while ( j< size2){
        ans[k] = arr2[j];
        k++;
        j++;
    }    
}
void mergeSort(int input[], int size){
    if(size==0 || size==1){
        return;
    }
    int mid=(0+size-1)/2;
    mergeSort(input,mid+1);
    mergeSort(input+mid+1,size-mid-1);
    int merged[1000];
    merge(input, mid+1, input+mid+1, size-mid-1, merged);
    for(int i=0;i<=size-1;i++){
        input[i]=merged[i];
    }
}