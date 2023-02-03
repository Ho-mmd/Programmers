//피자 나눠먹기(1)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int tmp = 0;
    
    tmp = n % 7;
    
    if (tmp > 0)
        answer = n / 7 + 1;
    else
        answer = n / 7;
    
    return answer;
}