class Solution {
public:
    bool isPalindrome(int x) {
        int dup,LD,reverse = 0;
          dup = x;
        if(x<0) return 0;
        while(x>0 ){
        LD = x % 10;
        x = x / 10;
        if(reverse > INT_MAX / 10) return 0;
        if(reverse < INT_MIN / 10) return 0;
        reverse = (reverse*10)+ LD;
        }
        if(dup == reverse) return 1;
         if(dup != reverse) return 0;
        return 0;
    }
};