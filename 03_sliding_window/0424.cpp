class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int> count;
        int mostFreq =0;
        int res=0;
        int l=0, r=0;
        for (; r < s.size(); r++) {
            count[s[r]] += 1;
            mostFreq = max(count[s[r]], mostFreq);
            if (r - l + 1 - mostFreq > k) {
                count[s[l]] -=1;
                l++;
            }
            res = max(res, r - l + 1);
        }
        return res;
    }
};
