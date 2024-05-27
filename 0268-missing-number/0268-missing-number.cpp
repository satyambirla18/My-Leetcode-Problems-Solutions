class Solution {
public:
    int missingNumber(vector<int>&a){
        int N = a.size();
    vector<int> hash(N+1,0);
    for (int i = 0; i < N ; i++)
        hash[a[i]]++;
    for (int i = 0; i <= N; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
    return -1;
}
};