class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int l = 0, r = nums.size() - 1;
        if(nums[r] > nums[l]) return nums[l];
        
        while(l <= r){
            int mid = l + (r - l)/2;
            if(nums[mid] > nums[0]) l = mid + 1;
            else r = mid - 1;
            
            if(nums[mid] > nums[mid + 1]) return nums[mid + 1];
            if(nums[mid - 1] > nums[mid]) return nums[mid];
        }
        return -1;
    }
};