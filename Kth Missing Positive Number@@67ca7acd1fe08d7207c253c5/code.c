// Your code here...
int findKthMissing(int arr[], int n, int k) {
    int missing_count = 0, current = 1, index = 0;

    while (missing_count < k) {
        if (index < n && arr[index] == current) {
            index++;  // Array ka next element check karna
        } else {
            missing_count++;  // Missing number mila
            if (missing_count == k) {
                return current;  // Kth missing number found
            }
        }
        current++;  // Next number check karna
    }
    return -1;  // Edge case (kabhi nahi aayega)
}