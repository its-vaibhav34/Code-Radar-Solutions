void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        } 
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int kthSmallest(int arr[], int n, int k) {
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    selectionSort(temp, n);
    return temp[k-1];
}