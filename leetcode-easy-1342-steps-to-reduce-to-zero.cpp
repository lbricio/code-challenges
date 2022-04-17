// problem: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution {
public:
    int numberOfSteps(int num)
    {
        int result = 0;
        while (num != 0)
        {
            if (num % 2 != 0)
                num--;
            else
                num /= 2;
            cout << num << endl;
            result++;
        }
        return result;
    }
};
