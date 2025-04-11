//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int currSum = 0, maxSum = INT_MIN;
         for(int val : arr){
             currSum += val;
             maxSum = max(currSum , maxSum);
             if(currSum < 0){
                 currSum = 0;
             }
         }
         return maxSum;
    }
};


