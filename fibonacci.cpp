#include <iostream>

using namespace std;

/*
	Sum of all fibonacci numbers below fibLimit
*/

int fibonacciSum()
{
	int fibLimit = 4000000;

	int prev[2] = { 0 , 0 }; /* Store the previous two fibonacci number */

	int fib = 0; /* Current fibonacci number */

	int fibSum = 0; /* Sum of fibonacci numbers */

	for ( int i = 0; i <= INT_MAX ; ++i )
	{
		if ( i == 0 )
		{
			prev[0] = 0;
		}
		else if ( i == 1 )
		{
			prev[1] = 1;
			prev[0] = 0;
			fib = 0;
		}
		else
		{
			fib = prev[1] + prev[0];

			if ( fib >= fibLimit )
			{
				break;
			}

			prev[0] = prev[1];
			prev[1] = fib;
		}

		fibSum += fib;
		cout << fib << "\t";
	}
	cout << endl;
	return fibSum;
}

// Non-recursive fibonacci solution
int fibonacciIterative(int N) {
          
    int prev = 0;
    int prevPrev = 0;
    int fib = 0;
    
    for( int i = 0; i <= N; ++i )
    {
        if( i == 0 )
        {
            prev = 0;
        }
        else if( i == 1 )
        {
            prev = 1;
            prevPrev = 0;
            fib = 0;
        }
        else
        {
            fib = prev + prevPrev;
            prevPrev = prev;
            prev = fib;
        }
    }
    return fib;
}

// Fibonacci recursive solution
int fibonacciRecursive(int num)
{
    if( num == 0 || num == 1 )
    {
        return num;
    }

    return fibonacciRecursive( num - 1 ) + fibonacciRecursive( num - 2 );    
}

int main()
{
    for( int i = 0; i < 10; i++ )
    {
       cout << fibonacciRecursive(i) << endl;
    }
}
