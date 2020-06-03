/*
  Source: https://www.hackerrank.com/challenges/arrays-introduction/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin >> N;// nof items
    // N integers separated by spaces
    if( N > 1000)
    {
        std::cout << "N is higher than 1000, value: " << N << std::endl;
    }

    vector<int> my_array;
    my_array.resize(N);

    for( int i = 0; i < N ; i++ )
    {
        cin >> my_array[i]; // read values
    }

    for( int i = N -1 ; i >= 0; --i )
    {
        std::cout << my_array[i] << " ";
    }
    return 0;
}
