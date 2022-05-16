// problem: https://leetcode.com/problems/binary-search/

class Solution
{
public:
    int search(vector<int> &num, int target)
    {
        int i = 0;
        int min = 0;
        int max = num.size() - 1;

        // when the length of vector is lower than 3
        // we have to take care with blocks beyond vector limits
        // (to avoid segfault)
        // so a simple algo to check small cases is useful
        if (max <= 3)
        {
            while (num[i] != target)
            {
                i++;

                if (i == num.size())
                    return (-1);
            }
            if (num[i] == target)
                return (i);
        }
        
        //check if target is beyond vector borders too
        if (target < num.front())
            return (-1);
        if (target > num.back())
            return (-1);
        

        while (1)
        {
            // let index beetween min and max
            i = (max + min) / 2;
            
            // avoid index stuck
            if (max - min <= 1)
                if (num[i] > target)
                    i--;
                else if (num[i] < target)
                    i++;
            
            //test success
            if (num[i] == target)
                return (i);
            
            //test impossible cases
            if (i > 0)
                if (num[i - 1] < target && num[i] > target)
                    return (-1);
            if (i < num.size() - 1)
                if (num[i] < target && num[i + 1] > target)
                    return (-1);
            
            //reduce min or max
            if (num[i] < target)
                min = i;
            else if (num[i] > target)
                max = i;
            
            //debug
            //cout << i << "   i = "<< i << ", min: " << min << ", max: " << max << endl;
        }
    }
};
