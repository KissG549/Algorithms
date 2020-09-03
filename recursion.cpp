#include <iostream>
using namespace std;

/*
  Sum numbers from 0 to n
*/
long long sum(int n)
{
	if (n == 1 || n == 0)
	{
		return n;
	}

	return n + sum( n - 1);
}

long long factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return n;
	}

	return n * factorial( n - 1 );
}

int main()
{
  cout << "Sum of the numbers between 0 and 10:" << sum(10) << endl;
  cout << "Factorial: " << factorial(10) << endl;

  return 0;
}
