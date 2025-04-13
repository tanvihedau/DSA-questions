int mergeAndCount(vector<int>&arr, int left, int mid, int right){
        int i = left, j = mid+1, k = 0, inversions = 0;
        vector<int> temp(right-left+1);
        
        while(i<=mid && j <= right){
            if(arr[i]<= arr[j]){
                temp[k++] = arr[i++];
            } else{
                temp[k++] = arr[j++];
                inversions += (mid - i + 1);
            }
        }
        
        while(i<=mid) temp[k++] = arr[i++];
        while(j <= right) temp[k++] = arr[j++];
        for(i=left, k = 0; i<=right; ++i,++k){
            arr[i] = temp[k];
        }
        return inversions;
    }
    
    int mergeSortAndCount(vector<int>&arr, int left, int right){
        int inversions = 0; 
        if(left<right){
            int mid = left +(right-left)/2;
            
            inversions += mergeSortAndCount(arr, left, mid);
             inversions += mergeSortAndCount(arr, mid+1, right);
              inversions += mergeAndCount(arr, left, mid, right);
        }
        return inversions;
    }
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        return mergeSortAndCount(arr, 0, arr.size()-1);
    }
