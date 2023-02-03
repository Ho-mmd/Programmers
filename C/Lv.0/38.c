//숨어있는 숫자의 덧셈 (1)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    int cnt = 0;
    
    while(my_string[cnt] != '\0') {
        if(0 <= (int)(my_string[cnt] - '0') && (int)(my_string[cnt] - '0') <= 9)
            answer += (int)(my_string[cnt] - '0');
        
        cnt += 1;
    }
    
    return answer;
}