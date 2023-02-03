//외계행성의 나이
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 5);
    char *tmp = (char *)malloc(sizeof(char) * 5);
    int i = 0, j;
    
    while(1) {
        tmp[i] = age % 10 + 'a';
        i += 1;
        age /= 10;
        if(age < 1)
            break;
    }
    
    for(j = 0; j < i; j++) 
        answer[j] = tmp[i - 1 - j];
    
    answer[j] = '\0';
    
    return answer;
}