//한 번만 등장한 문자
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 28);
    int tmp[27] = { 0 };
    int i = 0;
    
    while(s[i] != '\0') {
        tmp[s[i] - 'a'] += 1;
        i += 1;
    }
    
    i = 0;
    
    for(int j = 0; j < 27; j++)
        if(tmp[j] == 1) {
            answer[i] = j + 'a';
            i += 1;
        }
            
    answer[i] = '\0';
    
    return answer;
}