class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i <= nums.size(); ++i){
            int index = lower_bound(nums.begin(), nums.end(), i) - nums.begin();
            if(nums.size() - index == i) return i;
        }
        return -1;
    }
};