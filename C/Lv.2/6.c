//n^2 배열 자르기
//idea (x, y)일 때 max(x, y) + 1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, long long left, long long right) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (right - left + 1));
    int tm1, tm2, tp1, tp2;
    
    tm1 = left / n;
    tp1 = left % n;

    for(int i = 0; i < right - left + 1; i++) {
        if(tm1 > tp1)
            answer[i] = tm1 + 1;
        else
            answer[i] = tp1 + 1;
        tp1 += 1;
        if(tp1 == n){
            tp1 = 0;
            tm1 += 1;
        }
    }
    
    return answer;
}