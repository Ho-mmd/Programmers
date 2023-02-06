//피보나치 수
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int a = 0, b = 1, c = 1;
    
    for(int i = 2; i <= n; i++) {
        c = (a % 1234567 + b % 1234567) % 1234567;
        a = b;
        b = c;
    }
    
    answer = c;
    
    return answer;
}