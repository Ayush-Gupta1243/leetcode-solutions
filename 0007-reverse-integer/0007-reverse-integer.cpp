class Solution {
public:
    int reverse(int x) {
        int LD,reverse = 0;
        while(x < 0 || x>0){
        LD = x % 10;
        x = x /10;
        if(reverse > INT_MAX / 10) return 0;
                if(reverse < INT_MIN / 10) return 0;

        reverse = (reverse * 10) + LD;
        }
        return reverse;
        
    }
    };