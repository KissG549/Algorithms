/*
  Source: https://www.hackerrank.com/challenges/inherited-code/problem
*/

/* Define the exception here */
class BadLengthException : public exception
{
    int num;
public:
    BadLengthException(int n):num(n){}
    int what()
    {
        return num;
    }
};
