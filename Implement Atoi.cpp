int myAtoi(char *s) {
        // Your code here
        int index = 0, sign =1;
        long res = 0;
        while(s[index] == ' ') index++;
        
        if(s[index] == '-' || s[index] == '+'){
            sign = (s[index++] == '-') ? -1:1;
        }
        while(s[index]>='0'&&s[index]<='9'){
            res = res*10+(s[index++] - '0');
            
            if(res * sign > INT_MAX) return INT_MAX;
            if(res * sign < INT_MIN) return INT_MIN;
            
        }
        return (int)(res * sign);
    }
