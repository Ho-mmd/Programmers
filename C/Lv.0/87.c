//다음에 올 숫자
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// common_len은 배열 common의 길이입니다.
int solution(int common[], size_t common_len) {
    int answer = 0;
    int tmp1, tmp2;
    
    tmp1 = common[2] - common[1];
    tmp2 = common[1] - common[0];
    
    if(tmp1 == tmp2) {
        answer = common[common_len - 1] + tmp1;
        return answer;
    }
    else {
        tmp1 = common[2] / common[1];
        answer = common[common_len - 1] * tmp1;
        return answer;
    }
}