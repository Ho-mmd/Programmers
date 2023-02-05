//유한소수 판별하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int n, int m) {
    int tmp;
    int x, y;
    
    if(m > n) {
        tmp = n;
        n = m;
        m = tmp;
    }
    
    while(1) {
        tmp = n % m;
        n = m;
        m = tmp;
        
        if(m == 0)
            return n;
    }
}

int solution(int a, int b) {
    int answer = 0;
    
    b /= gcd(a, b);
    
    while(1) {
        if(b % 2 == 0)
            b /= 2;
        if(b % 5 == 0)
            b /= 5;
        if(b % 2 != 0 && b % 5 != 0)
            break;
    }
    
    if (b == 1)
        answer = 1;
    else
        answer = 2;
    
    return answer;
}