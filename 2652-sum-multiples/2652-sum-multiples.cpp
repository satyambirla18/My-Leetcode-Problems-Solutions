class Solution {
public:
    int sumOfMultiples(int n) {
        auto sum = [&](int k) {
            int m = n / k;
            return k * m * (m + 1) / 2;
        };
        return sum(3) + sum(5) + sum(7)
             - sum(15) - sum(21) - sum(35)
             + sum(105);
    }
};