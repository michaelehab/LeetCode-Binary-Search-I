class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        long long l = 1, r = num / 2;
        
        while(l <= r) {
            long long mid = (l + r) / 2;
            long long square = mid * mid;
            
            if (square == num) return true;
            else if (square < num) l = mid + 1;
            else r = mid - 1;
        }
        
        return false;
    }
    
    bool judgeSquareSum(int c) {
        if(!c) return true;
        for(long a = 0; a * a <= c; ++a){
            int b = c - (a * a);
            if(isPerfectSquare(b)) return true;
        }
        return false;
    }
};