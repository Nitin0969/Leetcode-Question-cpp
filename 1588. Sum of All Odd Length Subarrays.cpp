 
 /*Bruete force method to find sum of all odd subarray */
 
 /*int sumOddLengthSubarrays(vector<int>& arr) {
          int sum = 0;
          int n = arr.size();
            vector<int>arr2;
            for(int i=0;i<n;i++){
                 for(int j = i;j<n;j++){
                for(int k = i;k<=j;k++){
                    arr2.push_back(arr[k]);
                }
                if((arr2.size())%2!=0){
                    for(int p=0;p<arr2.size();p++){
                        sum = sum+arr2[p];
                    }
                }
                arr2.clear();
            }
        }
      return sum;
    }
    */
    // second method
    
/*    
   int sum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
    // Loop for odd subarray lengths starting from i
    for (int len = 1; i + len <= n; len += 2) {
    int subarraySum = 0;
    // Calculate the sum of the current odd-length subarray
    for (int j = i; j < i + len; j++) {
    subarraySum += arr[j];
    }
    sum += subarraySum;
    }
    }
    return sum;
    
    */