class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        unordered_map<int, int> seen;
        vector<int> ret;

        for (int i=0; i<nums.size(); i++) {
            if (seen.find(target - nums[i]) == seen.end()) {
                seen.insert(make_pair(nums[i], i));
            }
            else {
                return {seen[target - nums[i]] ,i};
            }
        }
        return {0 ,0};
    }
};
