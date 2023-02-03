//자릿수 더하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    while(1) {
        answer += n % 10;
        n /= 10;
        
        if(n < 1)
            break;
    }
    
    return answer;
}