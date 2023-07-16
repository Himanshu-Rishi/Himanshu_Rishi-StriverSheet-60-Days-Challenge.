// if all numbers are positive

long long maxSubarraySum(int arr[], int n){
        int sum = 0;
        int maxy = 0;
       for(int i = 0; i < n; i++)
       {
           sum += arr[i];
           if(sum < 0)
           {
               maxy = max(maxy, sum);
               sum = 0;
           }
       }
       maxy = max(maxy, sum);
        return maxy;
    }