int linear_search(int arr[], int n, int arg){
    for (int i = 0; i < n;i++){
        if (arg == arr[i])
        return i;
    }
    return -1;
}