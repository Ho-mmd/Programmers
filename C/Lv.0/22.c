//최댓값 만들기 (1)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int max1 = 0, max2 = 0;
    
    for(int i = 0; i < numbers_len; i++)
        if(numbers[i] > numbers[max1])
            max1 = i;
    
    if(max1 == 0)
        max2 = 1;
    
    for(int j = 0; j < numbers_len; j++)
        if(numbers[j] > numbers[max2] && j != max1)
            max2 = j;
    
    answer = numbers[max1] * numbers[max2];
    
    return answer;
}