//대문자와 소문자
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 1001);
    int i = 0, j = 0;
    
    while(1) {
        if(65 <= (int)my_string[i] && (int)my_string[i] <= 90) {
            answer[j] = my_string[i] + 32;
            j += 1;
        }
        else if(97 <= (int)my_string[i] && (int)my_string[i] <= 122) {
            answer[j] = my_string[i] - 32;
            j += 1;
        }
        else
            break;
        i += 1;
    }
    
    answer[j] = '\0';

    return answer;
}