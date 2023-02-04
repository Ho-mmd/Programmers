//잘라서 배열로 저장하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_str, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = 0;
    int tmp;
    
    while(my_str[len] != '\0')
        len += 1;
    
    if (len % n == 0)
        tmp = len;
    else
        tmp = len + 1;
    
    char** answer = (char**)malloc(sizeof(char*) * tmp);
    for(int i = 0; i < tmp; i++)
        answer[i] = (char*)malloc(sizeof(char) * n);
    
    int i = 0, j = 0, k = 0;
    
    for(i = 0; i < tmp; i++) {
        for(j = 0; j < n; j++) {
            answer[i][j] = my_str[k];
            k += 1;
        }
        answer[i][j] = '\0';
    }
        
    
    return answer;
}