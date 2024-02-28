class Solution {
public:
    int lengthOfLongestSubstring(string s) {  
        int longest_sequence = 0;
        vector<char> sequence;

       for (int i=0; i<s.size(); i++) {
            auto it = find(sequence.begin(), sequence.end(), s[i]);
            if (it != sequence.end()) {
                sequence.erase(sequence.begin(), it + 1);
            }
            sequence.push_back(s[i]);
            longest_sequence = max(int(sequence.size()), longest_sequence);
       }

       return longest_sequence;
    }
};
