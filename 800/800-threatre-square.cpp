# include <iostream>
# include <cmath>
# include <iomanip>

int main()
{
	double n, m, a;
	std::cin >> n >> m >> a;
	
	long double x_size = (n / a);
	long double y_size = (m / a);

	std::cout << std::ceil(x_size) * std::ceil(y_size) << std::endl;
	
	return (0);
}

// problem: https://codeforces.com/problemset/problem/1/A

	/* 
		//useful for debug

		std::cout << std::fixed << std::setprecision(10);
		std::cout << x_size << " " << y_size << std::endl;
		std::cout << std::defaultfloat;
	*/


	/*
		//other solution

		#include <bits/stdc++.h> 

		int main(){ 
			double n, m, a; 
			std::cin >> n >> m >> a; 
			std::cout << (long long) std::ceil(n/a)* (long long) std::ceil(m/a) << std::endl; 
		}
	*/

	/*
		//other solution

		#include <iostream>

		int main()
		{
			long long n, m, a;
			std::cin >> n >> m >> a;

			std::cout << ((n + a - 1)/ a) * ((m + a - 1)/ a) << std::endl;
		}
	*/

