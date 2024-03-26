#include <iostream>
#include <cmath>
using namespace std;

double fb(int n)
{
	long sum = 1;
	while (n > 0)
		{
			sum = sum * n;
			n--;
		}
	return sum;
}

double f1(double x, int n)
{
	double a = fb(2 * n);
	double b = pow(4, n);
	double c = pow(fb(n), 2);
	double d = 2 * n + 1;
	double e = pow(x, 2 * n + 1);

	return (a * e) / (b * c * d);
}

int main()
{
	int n = 0;
	double x  = 0;
	cin >> x;
	double ans = pow(1 + x, 0.5);
	while (1)
		{
			double a1 = f1(x, n);
			ans = ans + a1;
			n++;
			if (abs(a1) < 1e-7)
				break;
		}
//	cout << ans << endl;
	printf("%.7f", ans);
	return 0;
}
