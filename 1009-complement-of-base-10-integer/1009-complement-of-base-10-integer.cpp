class Solution {
public:
    int bitwiseComplement(int n) {
        int ans = 0;
        int mul = 1;
        int rem;
        if(n == 0) return 1;
        while(n){
            rem = n % 2;
            rem = rem^1;
            n /= 2;
            ans = ans + rem*mul;
            mul *= 2;
        }
        return ans;
    }
};