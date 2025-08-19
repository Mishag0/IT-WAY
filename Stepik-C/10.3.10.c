void sort_arr(int arr[], int n, int fl)
{
    for(int i = 0; i < n - 1; i++){
        int *extreme = &arr[i];

        for(int j = i + 1; j < n; j++){
            if ((fl == 0 && arr[j] < *extreme) || (fl == 1 && arr[j] > *extreme)){
                extreme = &arr[j];   
            }
        }
        if (extreme != &arr[i]){
            int temp = *extreme;
            *extreme = arr[i];
            arr[i] = temp;
        }
    }
}