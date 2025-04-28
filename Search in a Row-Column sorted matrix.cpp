bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int s = 0, e = mat[0].size()-1;
        while(s<mat.size() && e>=0 ){
            if(mat[s][e] == x) return true;
            else if (mat[s][e] > x) e--;
            else s++;
        }
        return false;
