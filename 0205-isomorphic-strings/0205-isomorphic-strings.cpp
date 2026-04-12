class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m[256] = {0};
        int n[256] = {0};
        int size = s.size();

        for(int i = 0; i < size; i++){
            if(m[s[i]] != n[t[i]]){
                return false;
            }
            m[s[i]] = i+1;
            n[t[i]] = i+1;
        }
        return true;
    }
};