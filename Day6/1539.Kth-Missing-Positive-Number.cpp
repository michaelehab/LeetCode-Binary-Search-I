class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int l = 0, r = n - 1, ans = 0;
        while (l <= r){
            int mid = l + (r - l) / 2;
            int missed = arr[mid] - mid - 1;
            if (missed >= k){
                ans = arr[mid] - (missed - k) - 1;
                r = mid - 1;
            }
            if (missed < k){
                l = mid + 1;
                ans = arr[mid] + k - missed;
            }
        }
        return ans;
    }
};