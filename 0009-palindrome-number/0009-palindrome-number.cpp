class Solution {
public:
    bool isPalindrome(int x) {
        int res = 0;
        int rem;
        int num = x;
        if (x < 0) return false;
        while (num){
            rem = num % 10;
            num /= 10;
            if (res > INT_MAX/10){
                return false;
            }
            res = res*10 + rem;
        }
        if (res == x) return true;
        else return false;
    }
};