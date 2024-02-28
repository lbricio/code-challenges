class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        map<string, vector<string>> groups;
        
        for (const auto &e : strs) {
            string actual_code = e;
            sort(actual_code.begin(), actual_code.end());
            groups[actual_code].push_back(e);
        }
        for (const auto &e : groups) {
            ret.push_back(e.second);
        }
        return ret;
    }
};
