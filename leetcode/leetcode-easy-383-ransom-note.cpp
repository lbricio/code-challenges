// https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int i = 0;
        int j;
        while (i < ransomNote.size())
        {
            j = 0;
            while (j < magazine.size())
            {
                if (ransomNote[i] == magazine[j])
                {
                    magazine[j] = 0;
                    break;
                }
                j++;
                if (j == magazine.size())
                    return (0);
            }
            i++;
        }
        return (1);
    }
};
