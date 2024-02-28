class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        int current;

        while (l <= r) {
            int current = l + (r - l) / 2;
            if (nums[current] < target)
                l = current +1;
            else if (nums[current] > target)
                r = current -1;
            else
                return current;
        }
        return -1;
    }
};
