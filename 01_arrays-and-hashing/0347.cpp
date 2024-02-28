class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ret;
        
        unordered_map<int, int> stored;

        for (const auto& n : nums) {
            if (stored.find(n) == stored.end())
                stored[n] = 1;
            else
                stored[n] += 1;
        }
        while (k--) {
            auto highest = stored.begin();
            for (auto it = stored.begin(); it != stored.end(); ++it) {
                if (it->second > highest->second) {
                    highest = it;
                }
            }
            ret.push_back(highest->first);
            stored.erase(highest);
        }
        return ret;
    }
};
