class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int c=0;
        for(int i=1;i<nums.size();i++){
            if(nums[c]!=nums[i]){
                 c++;
                nums[c]=nums[i];
            }
        }
        return c+1;
    }
};