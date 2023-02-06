//분수의 덧셈
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b) {
    int tmp;
    
    if(b > a) {
        tmp = a;
        a = b;
        b = tmp;
    }
    
    while(1) {
        tmp = a % b;
        a = b;
        b = tmp;
        
        if(b == 0)
            return a;
    }
    
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    int tmp;
    
    answer[0] = numer1 * denom2 + numer2 * denom1;
    answer[1] = denom1 * denom2;
    tmp = gcd(answer[0], answer[1]);
    
    answer[0] /= tmp;
    answer[1] /= tmp;
    
    return answer;
}