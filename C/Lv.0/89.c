//연속된 수의 합
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * num);
    int tmp = total / num;
    
    if(num % 2 == 1) {
        answer[num / 2] = tmp;
        tmp += 1;
        
        for(int i = 0; i < num / 2; i++) {
            answer[num / 2 + i + 1] = tmp;
            tmp += 1;
        }
        
        tmp = total / num - 1;
        
        for(int i = 0; i < num / 2; i++) {
            answer[num / 2 - i - 1] = tmp;
            tmp -= 1;
        }    
    }
    else {
        answer[num / 2 - 1] = tmp;
        tmp += 1;
        
        for(int i = 0; i < num / 2; i++) {
            answer[num / 2 + i] = tmp;
            tmp += 1;
        }
        
        tmp = total / num - 1;
        
        for(int i = 0; i < num / 2 - 1; i++) {
            answer[num / 2 - i - 2] = tmp;
            tmp -= 1;
        }    
    }
    
    return answer;
}