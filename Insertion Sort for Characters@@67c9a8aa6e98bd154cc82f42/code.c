// Your code here...
void insertionSort(char arr[],int n){
    for(int i=0;i<n;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[max]){
                max=j;
            }
        }
        char temp = arr[i];
        arr[i]= arr[max];
        arr[max]=arr[i];
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}