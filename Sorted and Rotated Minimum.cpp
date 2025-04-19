int findMin(vector<int>& arr) {
        // complete the function here
        int low = 0, high = arr.size()-1;
        while(low < high){
            int mid = low +(high -low) /2;
            if(arr[mid]>arr[high]){
                low = mid +1;
            } else{
                high = mid;
            }
            
        }
        return arr[low];
    }
