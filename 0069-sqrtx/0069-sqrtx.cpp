class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        long long i = 1;
        while (i * i <= x) {
            i++;
        }
        return i - 1;   // last valid
    }
};