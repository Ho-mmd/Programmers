//암호 해독
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* cipher, int code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 1001);
    int i = 0, j = 0;
    while(cipher[i] != '\0') {
        if((i + 1) % code == 0) {
            answer[j] = cipher[i];
            j += 1;
        }
        i += 1;
    }
    
    answer[j] = '\0';
    
    return answer;
}