#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    
    long long x = (long long)sqrt(n);
    
    if (x * x == n) {
        answer = (x + 1) * (x + 1);
    } else {
        answer = -1;
    }
    
    return answer;
}