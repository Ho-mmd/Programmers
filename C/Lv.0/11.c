//양꼬치
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    
    answer = n * 12000;
    k -= (n  / 10);
    
    answer += k * 2000;
    
    return answer;
}