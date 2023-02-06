//최솟값 만들기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int le = 0, cnt = 0;
    
    while(1) {
        if(s[cnt] == '(')
            le += 1;
        else if(s[cnt] == ')') {
            if(le == 0) {
                answer = false;
                break;
            }
            else 
                le -= 1;
        }
        
        cnt += 1;
        
        if(s[cnt] == '\0')
            break;
    }
    
    if (le != 0)
        answer = false;
    
    return answer;
}