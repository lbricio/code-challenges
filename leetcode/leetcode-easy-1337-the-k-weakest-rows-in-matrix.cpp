// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        short short int i;
        short short int j;
        
        //modify array first to become a sum of all row members
        i = 0;
        while (i < mat.size())
        {
            j = 1;
            while (j < mat[i].size())
            {
                mat[i][0] += mat[i][j];
                j++;
            }
            i++;
        }
        
        //compare row values to find the first weakest, k times
        i = 0;
        vector<int> vec;
        short short int weakest = 0;
        while (i < k)
        {
            j = 0;
            weakest = 0;
            while (j < mat.size())
            {
                if (mat[j][0] < mat[weakest][0])
                    weakest = j;
                j++;
            }
            vec.push_back(weakest);
            mat[weakest][0] = 101;
            i++;
        }
            
        return (vec);
    }
};
