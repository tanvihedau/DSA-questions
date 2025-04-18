    int countFreq(vector<int>& arr, int target) {
        // code here
        unordered_map<int , int> freq;
        for(int val : arr){
            freq[val]++;
            
        }
        return freq[target];
    }
