//편지
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* message) {
    int cnt = 0;
    
    while(1) {
        if(message[cnt] != '\0')
            cnt += 1;
        else
            break;
    }
    
    int answer = 0;
    
    answer = cnt * 2;
    
    return answer;
}