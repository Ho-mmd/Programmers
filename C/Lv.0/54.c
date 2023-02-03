//피자 나눠 먹기 (2)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b) {
    int tmp;
    
    if (b > a) {
        tmp = a;
        a = b;
        b = tmp;
    }
        
    while(1) {
        tmp = a % b;
        a = b;
        b = tmp;
        if(tmp == 0)
            return a;
    }
}

int solution(int n) {
    int answer = 0;
    
    answer = n / gcd(n, 6);
    
    return answer;
}