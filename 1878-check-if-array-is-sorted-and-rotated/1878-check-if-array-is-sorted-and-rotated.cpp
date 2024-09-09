class Solution {
public:
    bool check(vector<int> v,int idx,vector<int> &nums){
        reverse(v.begin(),v.begin()+idx+1);
        reverse(v.begin()+idx+1,v.end());
        reverse(v.begin(),v.end());
        return v==nums;
    }
    bool check(vector<int>& nums) {
        vector<int> v=nums;
        sort(v.begin(),v.end());
        vector<int> temp=v;
        for(int i=0;i<v.size();i++){
            bool res=check(v,i,nums);
            if(res) return true;
            v=temp;
        }
        return false;
    }
};