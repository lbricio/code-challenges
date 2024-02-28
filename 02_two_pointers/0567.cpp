class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s2_size = s2.size();
        if (s1.size() > s2_size)
            return false;

        vector<int> count_s1(26, 0);
        vector<int> count_s2(26, 0);
        for (auto &c : s1) {
            count_s1[c - 'a'] += 1;
        }
        for (auto &c : s2.substr(0, s1.size())) {
            count_s2[c - 'a'] += 1;
        }
        int left = 0;
        int right = s1.size()-1;
        while (right < s2_size) {
            for (int i=0; i<26; i++) {
                if (count_s1[i] != count_s2[i]) {
                    break;
                }
                if (i == 25)
                    return true;
            }
            
            count_s2[s2[left] - 'a'] -= 1;
            left++;
            right++;
            if (right < s2_size)
                count_s2[s2[right] - 'a'] += 1;
        }

        return false;
    }
};
