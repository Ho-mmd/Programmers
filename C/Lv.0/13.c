//문자열 뒤집기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int cnt = 0;
    int j = 0;
    
    while(1) {
        if (my_string[cnt] != '\0')
            cnt++;
        else
            break;
    }
    
    char* answer = (char*)malloc(sizeof(char) * cnt);
    
    for(int i = cnt - 1; i >= 0; i--) {
        answer[j] = my_string[i];
        j++;
    }
        
    answer[j] = '\0';
    
    return answer;
}