int maxWater(vector<int> &arr) {
        // code here
      int l =0, r=arr.size()-1,res=0, lmax=0, rmax=0;
        while(l<r){
    if(arr[l] < arr[r]){
        lmax = max(lmax, arr[l]);
        res +=lmax-arr[l];
        l++;
    }else{
        rmax = max(rmax, arr[r]);
        res += rmax-arr[r ];
        r--;
    }
    }
    return res;
    }
