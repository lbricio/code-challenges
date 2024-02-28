class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;

        sort(nums.begin(), nums.end());
        if (nums.size() < 3)
            return ret;
        
        int st;
        int ed;
        int target_sum;
        for (int i=0; i<nums.size()-2;) {
            st = i+1;
            ed = nums.size()-1;
            target_sum = nums[i] * -1;
            while (st < ed) {
                int sum = nums[st] + nums[ed];
                if (sum > target_sum)
                    ed -= 1;
                else if (sum < target_sum)
                    st += 1;
                else {
                    if(ret.size()==0 || (
                    !(ret.back()[0] == nums[i] && ret.back()[1] == nums[st] && ret.back()[2] == nums[ed])))
                        ret.push_back({nums[i], nums[st], nums[ed]});
                    st += 1;
                }
            }
            int actual = nums[i];
            while(i<nums.size()-2 && actual == nums[i])
                i++;
        }
        return ret;
    }
};
