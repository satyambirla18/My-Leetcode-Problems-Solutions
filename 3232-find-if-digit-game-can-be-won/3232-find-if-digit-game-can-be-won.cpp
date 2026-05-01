class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int total = 0;
        int single_sum = 0;
        int double_sum = 0;
        for (int x : nums) {
            total += x;
            if (x < 10) {
                single_sum += x;
            } else if (x >= 10 && x < 100) {
                double_sum += x;
            }
        }
        return (2 * single_sum > total) || (2 * double_sum > total);
    }
};