// https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n)
    {
        long int i;
        long int max = n;
        long int min = 0;
        
        // 1 element case
        if (n == 1)
            return (1);
        
        while (1) 
        {
            // set i in middle of max and min
            i = (min + max) / 2;
            
            // avoid index stuck
            if (((max + min) / 2) <= 1)
                if (isBadVersion(i) == false)
                    i++;
                else
                    i--;
            
            //check success and limit max
            if (isBadVersion(i) == 1)
            {
                if (i > 0)
                    if (isBadVersion(i - 1) == false)
                        break;
                else if (i == 0)
                    break;
                
                max = i;
            }
            
            //check and move min
            if (isBadVersion(min) == true)
                return(min);
            else
            {
                if (isBadVersion((i + min) / 2) == false)
                {
                    min = (i + min) / 2;
                    if (isBadVersion(min + 1) == false)
                        min++;
                    else
                        return (min + 1);
                }
                else
                    min++;
            }
            
            //debug
            //cout << "index: " << i << "  min: " << min << "  max: "<< max << endl;
        }
        return (i);
    }
};
