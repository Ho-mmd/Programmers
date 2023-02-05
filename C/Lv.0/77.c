//종이 자르기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int M, int N) {
    int answer = 0;
    
    answer += (M - 1) + M * (N - 1);
    
    return answer;
}