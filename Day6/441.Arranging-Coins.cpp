class Solution {
public:
    int arrangeCoins(int n) {
        long l = 0, r = n, ans = 0;
        while(l <= r){
            long mid = l + (r - l)/2;
            long total = (mid * (mid + 1))/2;
            if(total > n) r = mid - 1;
            else if(total <= n){
                ans = max(ans, mid);
                l = mid + 1;
            }
        }
        return ans;
    }
};