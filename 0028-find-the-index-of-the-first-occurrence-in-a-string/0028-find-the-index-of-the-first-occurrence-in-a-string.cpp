class Solution {
public:
    void findlps(vector<int> &lps, string s) {
        int p = 0, sf = 1;
        while(sf < s.size()){
            if(s[p] == s[sf]){
                lps[sf] = p + 1;
                p++;
                sf++;
            }
            else{
                if(p == 0){
                    lps[sf] = 0;
                    sf++;
                }
                else{
                    p = lps[p - 1];
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        vector<int> lps (needle.size(), 0);
        findlps(lps, needle);
        int f = 0, s = 0;
        while(s < needle.size() && f < haystack.size()){
            if(needle[s] == haystack[f]){
                f++;
                s++;
            }
            else{
                if(s == 0){
                    f++;
                }
                else{
                    s = lps[s-1];
                }
            }
        }
        if(s == needle.size()){
            return f-s;
        }
        return -1;
    }
};