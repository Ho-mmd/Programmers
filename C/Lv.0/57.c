//숫자 찾기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int answer = 0;
    int idx = 0;
    int flag = 0;
    
    while(1) {
        if(num % 10 == k) {
            answer = idx;
            flag = 1;
        }
        num /= 10;
        idx += 1;
        if(num < 1)
            break;
    }
    
    answer = idx - answer;
    
    if (flag == 0)
        answer = -1;
    
    return answer;
}