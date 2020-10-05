#include <iostream>

/**
		The FizzBuzz problem
		print the numbers from 0 to 100
    
    Write a program that prints the numbers from 1 to 100. 
    ut for multiples of three print "Fizz" instead of the number and for the multiples of five print "Buzz". 
    For numbers which are multiples of both three and five print "FizzBuzz".
    
    Source: https://blog.codinghorror.com/why-cant-programmers-program/
*/

using namespace std;

string fizzBuzzString(int n)
{
	/*
		Source: https://www.youtube.com/watch?v=nItSZp6R8tg
	*/
	
	string result;
	if( n % 3 == 0 )
		result += "Fizz";
	if( n % 5 == 0 )
		result += "Buzz";
	if( result.empty() )
		result = to_string(n);
	return result;
}

void fizzBuzzNaive()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else if (i % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
}

int main()
{
	for( int i = ; i <= 100; ++i)
	{
		cout << fizzBuzzString(i) << " " << endl;
	}
	
 return 0;   
}
