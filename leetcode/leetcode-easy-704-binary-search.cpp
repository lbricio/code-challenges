// problem: https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        if (nums.front() > target || nums.back() < target)
            return (-1);
        
        int pivot = nums.size() / 2;
        int max = nums.size() - 1;
        int min = 0;
        int sum;
        while (1)
        {
            if (nums.at(pivot) == target)
                return pivot;
            else if (nums.at(pivot) < target)
            {
                min = pivot + 1;
                sum = (max - pivot) / 2;
                if (sum == 0)
                    sum = 1;
                pivot += sum;
                if (nums.at(min) > target)
                    return (-1);
            }
            else if (nums.at(pivot) > target)
            {
                max = pivot - 1;
                sum = (pivot - min) / 2;
                if (sum == 0)
                    sum = 1;
                pivot -= sum;
                if (nums.at(max) < target)
                    return (-1);
            }
        }
    }
};
