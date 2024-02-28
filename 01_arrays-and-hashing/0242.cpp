class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        int a[26] = {0};
        int b[26] = {0};

        for (auto const &e : s)
            a[e - 'a'] += 1;
        for (auto const &e : t)
            b[e - 'a'] += 1;
        for (int i =0; i < 26; i++) {
            if (a[i] != b[i]) {
                cout << a[i] << " " << b[i] << endl;
                return false;
            }
        }
        return true;
    }
};
