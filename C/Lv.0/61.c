//팩토리얼
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i = 1, j = 1;
    
    while(1) {
        i *= j;
        j += 1;
        
        if(i > n) {
            break;   
        }
    }
    
    answer = j - 2;
    
    return answer;
}