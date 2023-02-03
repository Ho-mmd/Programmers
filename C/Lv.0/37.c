//제곱수 판별하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 2;
    
    for(int i = 1; i < n; i++) {
        if (n == i * i)
            answer = 1;
        else if(i * i > n)
            break;
    }
    
    return answer;
}