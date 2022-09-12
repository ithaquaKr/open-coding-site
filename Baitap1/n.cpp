#include<iostream>

long long gcd(long long a, long long b)
{
	if (a < 0)
	{
		a *= -1;
	}
	if (b < 0)
	{
		b *=-1;
	}
	if (b == 0)
	{
		return a;
	}
	else return gcd(b ,a % b);
}
long long lcm(long long a, long long b)
{
	return a * b / gcd(a, b);
}
int main()
{
	int testcase;
	int a, b;

	std::cin >> testcase;
	
	while (testcase--)
	{
		std::cin >> a >> b;
		std::cout << lcm(a, b) << " " << gcd(a, b)<< std::endl;
	}

}