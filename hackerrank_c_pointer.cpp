/*
 Source:
  https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
*/

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function

    int sum = *a + *b;
    int diff = *a - *b; 
    if( diff < 0 )
        diff *= -1;
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
