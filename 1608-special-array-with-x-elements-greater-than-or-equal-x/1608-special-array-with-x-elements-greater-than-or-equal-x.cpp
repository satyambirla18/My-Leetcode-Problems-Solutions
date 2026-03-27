class Solution {
public:
    int specialArray(vector<int>& nums){
        int n = nums.size();
        vector<int> freq (n+1, 0);
        for(int i = 0; i < n; i++){
            if(nums[i] >= n) freq[n]++;
            else freq[nums[i]]++;
        }
        int count = 0;
        for(int i = n; i >= 0; i--){
            count += freq[i];
            if(count == i) return i;
        }
        return -1;
    }
};