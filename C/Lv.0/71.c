//소인수분해
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 10001);
    int k = 0;
    int i = 2;
    
    while(1) {
        if(n % i == 0) {
            if(i != answer[k - 1]) {
                answer[k] = i;
                k += 1;
            }
            n /= i;
        }
        else if(n % i != 0) {
            i += 1;
        }
        
        if(n == 1)
            break;
    }
    
    return answer;
}