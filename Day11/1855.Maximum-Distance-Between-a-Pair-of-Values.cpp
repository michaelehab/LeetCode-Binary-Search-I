class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int ans = 0;
        for(int i = 0; i < nums1.size(); ++i){
            int x = lower_bound(nums2.rbegin(), nums2.rend(), nums1[i]) - nums2.rbegin();
            int j = ((n - x) - 1);
            ans = max(ans, j - i);
        }
        return ans;
    }
};