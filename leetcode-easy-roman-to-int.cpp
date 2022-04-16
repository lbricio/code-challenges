#include <iostream>
#include <string>

using namespace std;

int romanCharToInt(char R)
{
    if (R == 'M')
        return 1000;
    else if (R == 'D')
        return 500;
    else if (R == 'C')
        return 100;
    else if (R == 'L')
        return 50;
    else if (R == 'X')
        return 10;
    else if (R == 'V')
        return 5;
    else if (R == 'I')
        return 1;
    return 0;
}

int compareRomans(char actual, char front)
{
    if ( romanCharToInt(actual) > romanCharToInt(front) )
        return (1);
    else if ( romanCharToInt(actual) < romanCharToInt(front) )
        return (-1);
    return (0);
}

class Solution
{
    public:
        int romanToInt(string s)
        {
            int i = 0;
            int result = 0;
            
            while(i < s.length()) 
            {
                if ((compareRomans(s[i], s[i + 1])) >= 0)
                    result += romanCharToInt(s[i]); 
                else if ((compareRomans(s[i], s[i + 1])) < 0)
                    result -= romanCharToInt(s[i]);
                i++;
            }
        	return (result);
    	}
};
