int maxWater(vector<int> &arr) {
        // code here
   int l =0, r= arr.size()-1, res = 0;
   while(l<r) res = max(res, (r-l)*(arr[l]<arr[r]?arr[l++]:arr[r--]));
   return res;
    }
