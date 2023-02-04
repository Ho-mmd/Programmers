//7의 개수
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int tmp;
    
    for(int i = 0; i < array_len; i++) {
        while(1) {
            tmp = array[i] % 10;
            if(tmp == 7)
                answer += 1;
            array[i] /= 10;
            if(array[i] < 1)
                break;
        }
    }
    
    return answer;
}