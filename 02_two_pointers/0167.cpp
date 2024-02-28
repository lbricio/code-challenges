class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int st = 0;
        int ed = numbers.size()-1;

        while (st != ed) {
            while (numbers[st] + numbers[ed] > target)
                ed -= 1;
            if (numbers[st] + numbers[ed] == target)
                return {st+1, ed+1};
            st += 1;
        }
        return {};
    }
};
