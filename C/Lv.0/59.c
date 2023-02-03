//합성수 찾기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for(int i = 4; i <= n; i++) {
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                answer += 1;
                break;
            }
        }
    }
    
    return answer;
}