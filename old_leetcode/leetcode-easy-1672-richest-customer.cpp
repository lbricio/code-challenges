// problem: https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        
        int max_recorded = 0;
        int sum;
        int i = 0;
        int j;
        while(i != accounts.size())
        {
            sum = 0;
            j = 0;
            while(j != accounts[i].size())
            {
                sum += accounts[i][j];
                cout << sum << endl;
                j++;
            }
            if (sum >= max_recorded)
                max_recorded = sum;
            i++;
        }
        return (max_recorded);
    }
};
