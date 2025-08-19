int binary_search(int arr[], int n, int arg)
{
    int l_wall = 0;
    int r_wall = n;
    int res = -1;
    int first = 0;
    int last = n - 1;
    while (first <= last) {
        int mid = (last - first) / 2;

        if (arg <= arr[mid])
            last = mid;
        else
            first = mid + 1;
    }

    if (last < n && arr[last] == arg)
        res = last;

	return res;	   
}