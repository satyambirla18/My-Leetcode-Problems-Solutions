class Solution {
public:

    int num(char c){
        if(c == 'I'){
            return 1;
        }
        else if(c == 'V'){
            return 5;
        }
        else if(c == 'X'){
            return 10;
        }
        else if(c == 'L'){
            return 50;
        }
        else if(c == 'C'){
            return 100;
        }else if(c == 'D'){
            return 500;
        }
        else{
            return 1000;
        }
    }

    int romanToInt(string s) {
        int sum = 0;
        int idx = 0;
        while(idx < s.size()-1){
            if(num(s[idx]) < num(s[idx+1])){
                sum -= num(s[idx]);
            }
            else{
                sum += num(s[idx]);
            }
            idx++;
        }
        sum += num(s[s.size()-1]);
        return sum;
    }
};