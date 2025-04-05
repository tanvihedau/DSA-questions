 string addBinary(string& s1, string& s2) {
        int i = s1.length() - 1;
        int j = s2.length() - 1;
        string ans;
        int carry= 0;
        
        while(i>=0 || j>=0 || carry){
           int bit1 = (i>=0) ? s1[i--] -'0' : 0;
            int bit2 = (j>=0) ? s2[j--] -'0' : 0;
            int sum = bit1+bit2+carry;
            
            ans.push_back((sum%2)+'0');
            carry = sum / 2;
        }
        reverse(ans.begin() , ans.end());
        int pos = ans.find_first_not_of('0');
        if(pos == string::npos) return "0";
        return ans.substr(pos);
    }
