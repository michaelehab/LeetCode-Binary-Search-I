class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, res = -1;
        vector <int> ans;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] == target){
                res = mid;
                r = mid - 1;
            }
            else if(target < nums[mid]) r = mid - 1;
            else l = mid + 1;
        }
        
        ans.push_back(res);
        l = 0, r = nums.size() - 1, res = -1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] == target){
                res = mid;
                l = mid + 1;
            }
            else if(target < nums[mid]) r = mid - 1;
            else l = mid + 1;
        }
        ans.push_back(res);
        return ans;
    }
};