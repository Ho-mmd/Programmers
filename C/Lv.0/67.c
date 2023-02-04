//숨어있는 숫자의 덧셈 (2)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int poy(int n) {
    int i = 1;
    
    for(int j = 1; j < n; j++)
        i *= 10;
    
    return i;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    int i = 0;
    int start, end;
    int num;
    
    while(my_string[i] != '\0') {
        if(1 <= my_string[i] - '0' && my_string[i] - '0' <= 9) {
            start = i;
            while(1) {
                i += 1;
                if(0 > my_string[i] - '0' || my_string[i] - '0' > 9) {
                    end = i;
                    break;
                }
            }
            num = end - start;
            for(int j = start; j < end; j++) {
                answer += (my_string[j] - '0') * poy(num);
                num -= 1;
            }    
        }
        i += 1;
    }
    
    return answer;
}