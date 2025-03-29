// Your code here...
void selectionSort(char arr[],int n){
    for(int i=0;i<n;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[max]){
                max=j;
            }
        }
        char temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c",arr[i]);
    }
}