class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int start = 1;
        int end = position[n-1]-position[0];
        int mid, ans;
        while(start <= end){
            mid = start+(end-start)/2;
            int location = position[0];
            int count = 1;
            for(int i = 0; i < n; i++){
                if(location + mid <= position[i]){
                    count++;
                    location = position[i];
                }
            }
            if(count < m){
                end = mid-1;
            }
            else{
                ans = mid;
                start = mid+1;
            }
        }
        return ans;
    }
};