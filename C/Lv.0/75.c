//삼각형의 완성조건 (2)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int max, min;
    
    if(sides[0] > sides[1]) {
        max = sides[0];
        min = sides[1];
    }
    else {
        max = sides[1];
        min = sides[0];
    }
     
    for(int i = max - min + 1; i <= max; i++)
        answer += 1;
    for(int i = max + min - 1; i > max; i--)
        answer += 1;
    
    return answer;
}