class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int digitsum = 0;
        int elementsum = 0;

        for(int i = 0; i < n; i++){
            elementsum += nums[i];

            while(nums[i] > 0){
                digitsum += nums[i]%10;
                nums[i] /= 10;
            }
        }
        return abs(elementsum - digitsum);
    }
};