class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> ans;

        for(int i = 0; i < n - 2; i++) {
            if(i > 0 && arr[i] == arr[i - 1]) continue;
            int s = i + 1;
            int e = n - 1;
            while(s < e){
                int sum = arr[i] + arr[s] + arr[e];
                if(sum == 0) {
                    ans.push_back({arr[i], arr[s], arr[e]});
                    while(s < e && arr[s] == arr[s + 1]) s++;
                    while(s < e && arr[e] == arr[e - 1]) e--;
                    s++;
                    e--;
                }
                else if(sum < 0) {
                    s++;
                }
                else {
                    e--;
                }
            }
        }
        return ans;
    }
};