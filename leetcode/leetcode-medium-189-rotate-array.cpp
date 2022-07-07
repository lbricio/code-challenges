// https://leetcode.com/problems/rotate-array/

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int ans[nums.size()];
        int i = 0;
        
        k = k % nums.size();
        
        if (nums.size() != 1)
        {
            while (i < nums.size())
            {
                if ( i - k < 0 )
                    ans[i] = nums[i - k + (nums.size())];
                else
                    ans[i] = nums[i - k];
                i++;
            }

            i = 0;
            while (i < nums.size())
            {
                nums[i] = ans[i];
                i++;
            }
        }
    }
};
