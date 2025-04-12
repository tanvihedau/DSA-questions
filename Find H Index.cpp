 // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        int n = citations.size();
        vector<int> count(n+1, 0);
        for(int c : citations){
            if(c>=n) count[n]++;
            else{
                count[c]++;
            }
        }
        int total = 0;
        for(int i =n;i >=0; i--){
            total +=count[i];
            if(total>=i){
                return i;
            }
        }
        return 0;
    }
