class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s = 0;
        int l = arr.size()-1;
        int ans = arr.size();

        while(s <= l){
            int mid = s+(l-s)/2;
            if(arr[mid]-mid-1 >= k){
                ans = mid;
                l = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans+k;
    }
};