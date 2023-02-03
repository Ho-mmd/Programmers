//369게임
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int answer = 0;
    
    while(1) {
        if((order % 10) == 3 || (order % 10) == 6 || (order % 10) == 9)
            answer += 1;
        
        order /= 10;
        
        if(order < 1)
            break;
    }
    
    return answer;
}