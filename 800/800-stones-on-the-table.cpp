# include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int row;
    string pedras;

    cin >> row >> pedras;
    
    int result = 0;
    while (x < row)
    {
        if (pedras[x] == pedras[x - 1])
            result++;
		x++;
    }
	cout << result << endl;

    return(0);
}

// problem: https://codeforces.com/problemset/problem/266/A
