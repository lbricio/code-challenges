/*
** problem: https://codeforces.com/problemset/problem/1657/B
*/

# include <iostream>
# include <cmath>
# include <iomanip>
using namespace std;

/*
n = número de elementos
B = maior valor possível de cada elemento
x = valor de soma
y = valor de subtração

objetivos: construir a sequência com maior somatório possível
*/

int main()
{
	int tt, n, B, x, y;
	cin >> tt;
	while (tt--)
	{
		cin >> n >> B >> x >> y;

		long sum = 0;
		long long ans = 0;
		int nn = 0;
		while(nn < n)
		{
			if ( sum + x <= B)
			{
				sum += x;
				ans += sum;
			}
			else
			{
				sum -= y;
				ans += sum;
			}
			nn++;
		}
		cout << ans << endl;
	}
}
