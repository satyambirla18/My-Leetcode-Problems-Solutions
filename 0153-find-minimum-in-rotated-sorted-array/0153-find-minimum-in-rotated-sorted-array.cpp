class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0;
        int l = nums.size() - 1;
        int ans = nums[0];

        while (s <= l){
            int mid = s + (l - s) / 2;

            if (nums[mid] >= nums[0]){
                s = mid+1;
            }
            else{
                ans = nums[mid];
                l = mid-1;
            }
        }
        return ans;
    }
};