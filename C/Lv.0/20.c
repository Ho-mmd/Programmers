//삼각형의 완성조건(1)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int max = 0;
    int sum = 0;
    
    for(int i = 0; i < sides_len; i++)
        if (sides[i] > sides[max])
            max = i;
    
    for(int i = 0; i < sides_len; i++)
        if (i != max)
            sum += sides[i];
    
    if(sides[max] < sum)
        answer = 1;
    else
        answer = 2;
    
    return answer;
}