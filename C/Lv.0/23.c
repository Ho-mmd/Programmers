//피자 나눠 먹기 (3)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 0;
    
    int tmp = n % slice;
    
    if(tmp > 0)
        answer = n / slice + 1;
    else
        answer = n / slice;
    
    return answer;
}