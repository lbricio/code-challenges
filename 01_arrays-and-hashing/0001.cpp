// [problem]
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// [solution]
// iterate through each number O(n)
// store them in a structure that allows for fast access, ideally O(1)
// his structure also needs to store the number and its position, requiring a key-value pair (hashmap)
// verify if the required number to reach target is already in our list O(1)
// O(n * 1 * 1) -> O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        unordered_map<int, int> seen;
        vector<int> ret;

        for (int i=0; i<nums.size(); i++) { // O(n)
            if (seen.find(target - nums[i]) == seen.end()) { // O(1)
                seen.insert(make_pair(nums[i], i));
            }
            else {
                return {seen[target - nums[i]] ,i};
            }
        }
        return {0 ,0};
    }
};
