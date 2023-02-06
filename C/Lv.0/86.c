//최빈값 구하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int tmp[1001] = { 0 };
    int max = 0, cnt;
    
    for(int i = 0; i < array_len; i++)
        tmp[array[i]] += 1;
    
    for(int i = 0; i < 1000; i++) {
        if(tmp[max] < tmp[i]) {
            max = i;
            cnt = 0;
        }
        if(tmp[max] == tmp[i])
            cnt += 1;
    }
    
    if(cnt != 1)
        answer = -1;
    else
        answer = max;
    
    return answer;
}