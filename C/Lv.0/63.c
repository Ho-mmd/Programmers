//가까운 수
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int abs(int n) {
    if(n > 0)
        return n;
    else
        return -n;
}

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = 0;
    int min = 0;
    
    for(int i = 0; i < array_len; i++)
        if(abs(n - array[i]) < abs(n - array[min]))
            min = i;
        else if(abs(n - array[i]) == abs(n - array[min]))
            if(array[i] < array[min])
                min = i;
    
    answer = array[min];
    
    return answer;
}