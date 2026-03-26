class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int l = n-1;
        int ans = 0;

        while(s <= l){
            int mid = s+(l-s)/2;
            if(nums[mid] == target){
                return true;
            }
            if(nums[mid] == nums[s] && nums[mid] == nums[l]){
                s++;
                l--;
            }
            else if(nums[mid] >= nums[s]){
                if(nums[mid] >= target && target >= nums[s]){
                    l = mid-1;
                }
                else{
                    s = mid+1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[l]){
                    s = mid+1;
                }
                else{
                    l = mid-1;
                }
            }
        }
        return false;
    }
};