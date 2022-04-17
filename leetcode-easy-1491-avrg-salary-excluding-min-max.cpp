// problem: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

class Solution
{
    public:
        double average(vector<int>& salary)
        {
            int min = salary.at(0);
            int max = 0;              
            int i = 0;
            double result = 0;

            while (i != salary.size())
            {
                if (salary.at(i) < min)
                    min = salary.at(i);
                if (salary.at(i) > max)
                    max = salary.at(i);
                result += salary.at(i);
                i++;
            }
            return ((result - min - max)/(salary.size() - 2));   
        }
};
