class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> ans;
        
        for (auto & n : nums1) freq[n]++;
        
        for (auto & n : nums2) {
            if (freq[n]) {
                ans.push_back(n);
                freq[n]--;
            }
        }
        
        return ans;
    }
};