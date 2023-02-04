//k의 개수
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    int tmp1, tmp2;
    
    for(int t = i; t <= j; t++) {
        tmp1 = t;
        while(1) {
            tmp2 = tmp1 % 10;
            if(tmp2 == k)
                answer += 1;
            tmp1 /= 10;
            
            if(tmp1 < 1)
                break;
        }
    }
    
    return answer;
}