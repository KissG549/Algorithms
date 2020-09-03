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

int main()
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
    
 return 0;   
}
