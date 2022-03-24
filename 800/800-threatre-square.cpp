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

	/* useful for debug
    std::cout << std::fixed << std::setprecision(10);
	std::cout << x_size << " " << y_size << std::endl;
	std::cout << std::defaultfloat; */

/* a better solution:
#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    double n, m, a; 
    cin >> n >> m >> a; 
    cout << (long long) ceil(n/a)* (long long) ceil(m/a) << endl; 
} */
