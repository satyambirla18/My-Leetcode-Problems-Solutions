class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        if(n < days) return -1;
        int start = 0;
        int end = 0;
        int mid, ans;
        for(int i = 0; i < n; i++){
            start = max(start, weights[i]);
            end += weights[i];
        }
        
        while(start <= end){
            mid = start+(end-start)/2;
            int packages = 0;
            int count = 1;
            for(int i = 0; i < n; i++){
                packages += weights[i];
                if(packages > mid){
                    count++;
                    packages = weights[i];
                }
            }
            if(count <= days){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};