//배열 원소의 길이
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// strlist_len은 배열 strlist의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* strlist[], size_t strlist_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * strlist_len);
    int cnt, j;
    
    for(int i = 0; i < strlist_len; i++) {
        cnt = 0;
        j = 0;
        while(1) {
            if(strlist[i][j] != '\0')
                cnt += 1;
            else
                break;
            j += 1;
        }
        answer[i] = cnt;
    }
    
    return answer;
}