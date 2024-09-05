class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=0;i<n;i++){
            int ele=i+1;
            if(ele%3==0 && ele%5==0) ans.push_back("FizzBuzz");
            else if(ele%3==0) ans.push_back("Fizz");
            else if(ele%5==0) ans.push_back("Buzz");
            else ans.push_back(to_string(ele));
        }
        return ans;
    }
};