// https://leetcode.com/problems/fizz-buzz/

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> vec;
        std::string s;
            
        int i = 1;
        while (i <= n)
        {
            if (i % 3 == 0 && i % 5 == 0)
                vec.push_back("FizzBuzz");
            else if (i % 3 == 0)
                vec.push_back("Fizz");
            else if (i % 5 == 0)
                vec.push_back("Buzz");
            else
            {
                s = to_string(i);
                vec.push_back(s);
            }
            i++;
        }
        return (vec);
    }
};
