class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        int length = 0;

        for (int num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {
                length = 1;
                while (numSet.find(num + length) != numSet.end()) {
                    length += 1;
                }
                longest = std::max(longest, length);
            }
        }
        return longest;
    }
};
