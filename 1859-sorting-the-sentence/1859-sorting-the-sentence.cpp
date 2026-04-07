class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        string temp;
        
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                int pos = temp.back() - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
            } else {
                temp += s[i];
            }
        }

        string result;
        for (int i = 1; i < 10; i++) {
            if (ans[i] != "") {
                result += ans[i] + " ";
            }
        }

        result.pop_back();
        return result;
    }
};