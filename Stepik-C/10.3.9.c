int minmax(int arr[], int n, int fl)
{
    switch (fl){
        case 0:{
        int min = arr[0];
        for(int i = 1;i < n;i++){
        if(arr[i] < min) min  = arr[i];    
        }
        return min;}
        case 1:{
        int max = arr[0];
        for(int i = 1;i < n;i++){
        if(arr[i] > max) max  = arr[i];    
        }
        return max;}
    }
}