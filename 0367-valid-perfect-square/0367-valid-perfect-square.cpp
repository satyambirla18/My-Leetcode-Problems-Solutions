class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0) return true;
        int start = 1;
        int end = num;
        int mid;
        while(start <= end){
            mid = start+(end-start)/2;
            if(mid == num/mid && num % mid == 0) return true;
            else if(mid > num/mid){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return false;
    }
};