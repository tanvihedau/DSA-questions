
class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> s(a.begin(), a.end());
        s.insert(b.begin(),b.end());
        return s.size();
    }
};


