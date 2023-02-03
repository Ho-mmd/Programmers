//특정 문자 제거하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int cnt = 0;
    int tmp = 0;
    
    while(1) {
        if(my_string[cnt] != '\0') {
            if(my_string[cnt] == letter[0])
                tmp += 1;
            cnt += 1;
        }
        else
            break;
    }
    
    tmp = cnt - tmp;
    
    char* answer = (char*)malloc(sizeof(char) * tmp);
    
    tmp = 0;
    
    for(int i = 0; i < cnt; i++)
        if(my_string[i] != letter[0]) {
            answer[tmp] = my_string[i];
            tmp += 1;
        }
        
    answer[tmp] = '\0';
    
    return answer;
}