//귤 고르기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

// tangerine_len은 배열 tangerine의 길이입니다.
int solution(int k, int tangerine[], size_t tangerine_len) {
    int answer = 0;
    int cnt[10000001] = { 0 };

    int j = 0;
    
    for(int i = 0; i < tangerine_len; i++) 
        cnt[tangerine[i]] += 1;
    
    qsort(cnt, 10000001, sizeof(int), cmp);
    
    while(1) {
        answer += cnt[j];
        if(answer >= k)
            break;
        j += 1;
    }
    
    answer = j + 1;
    
    return answer;
}