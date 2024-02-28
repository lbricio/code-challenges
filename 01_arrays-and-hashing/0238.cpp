class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int nums_size = nums.size();
        vector<int> res(nums_size, 1);

        int val=1;
        for (int i=0; i<nums_size; i++) {
            res[i] *= val;
            val *= nums[i];
        }
        val = 1;
        for (int i=nums_size-1; i>=0; i--) {
            res[i] *= val;
            val *= nums[i];
        }

        return res;
    }
};
