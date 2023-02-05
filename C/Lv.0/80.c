//치킨 쿠폰
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int chicken) {
    int answer = -1;
    int tmp = 0, tic = 0;
    
    while(1) {
        tmp += chicken / 10;
        tic += chicken % 10;
        chicken /= 10;
        
        if(chicken < 1) {
            break;
        }
    }
    
    if(tic % 10 + tic / 10 >= 10)
        answer = tmp + tic / 10 + 1;
    else
        answer = tmp + tic / 10;
    
    // 100 10,0 1,0
    // 1081 108,1 10,9 1,10 
    
    return answer;
}