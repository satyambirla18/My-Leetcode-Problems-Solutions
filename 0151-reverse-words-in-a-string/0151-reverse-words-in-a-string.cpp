class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        string word = "";
        for(int i = n - 1; i >= 0; i--){
            if(s[i] != ' '){
                word = s[i] + word;
            } 
            else {
                if(!word.empty()){
                    if(!ans.empty()){
                        ans += " ";
                    }
                    ans += word;
                    word = "";
                }
            }
        }
        if(!word.empty()){
            if(!ans.empty()){
                ans += " ";
            }
            ans += word;
        }
        return ans;
    }
};