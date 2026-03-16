class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int org = num;
        while(num){
            int d = num % 10;
            if(org%d == 0) count++;
            num /= 10;
        }
        return count;
    }
};