
    int circularSubarraySum(vector<int> &arr) {
      int totalSum =0, maxSum =INT_MIN, minSum = INT_MAX;
      int currMax  =0 , currMin = 0;
      bool allNegative = true;
      
      for(int i : arr){
          totalSum+=i;
          
          currMax = max(i , currMax+ i );
          maxSum = max(maxSum, currMax);
          
          currMin = min(i, currMin+i );
          minSum = min(minSum, currMin);
          if(i > 0) allNegative = 0;
      }
      if(allNegative) return   maxSum;
      return max(maxSum , totalSum - minSum);
        
    }
