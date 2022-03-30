// problem: https://codeforces.com/problemset/problem/58/A

# include <iostream>
using namespace std;

int main ()
{
	string s;
	cin >> s;

	int i = 0, l = 0;
	while (1)
	{
		while (s[i] != 'h' && s[i] != '\0')
			i++;
		if (s[i] == 'h')
			i++;
		else if (s[i] == '\0')
			break;

		while (s[i] != 'e' && s[i] != '\0')
			i++;
		if (s[i] == 'e')
			i++;
		else if (s[i] == '\0')
			break;

		while (s[i] != 'l' && s[i] != '\0')
			i++;
		if (s[i] == 'l')
		{
			i++;
			l++;
		}
		if (s[i] == '\0')
			break;
		while (s[i] != 'l' && s[i] != '\0' && s[i] != 'o')
			i++;
		if (s[i] == 'l')
		{
			i++;
			l++;
		}
		if (s[i] == '\0')
			break;


		while (s[i] != 'o' && s[i] != '\0')
			i++;
		if (s[i] == 'o' && l >= 2)
		{
			cout << "YES" << endl;
			return (0);
		}
		else if (s[i] == '\0')
			break;
	}
	cout << "NO" << endl;
	return (0);
}
