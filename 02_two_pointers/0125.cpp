bool notAlpha(char s) {
    return ((s < 'a' || s > 'z') && (s < '0' || s > '9'));
}

class Solution {
public:
    bool isPalindrome(string s) {
        int to_low('A' - 'a');
        
        for (auto it = s.begin(); it != s.end(); it++)
            if (*it >= 'A' && *it <= 'Z')
                *it -= to_low;
        s.erase(remove_if(s.begin(), s.end(), notAlpha), s.end());

        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());

        return (s == rev_s);
    }
};
