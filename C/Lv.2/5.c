//멀리 뛰기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int n) {
    long long answer = 0;
    long long arr[2001] = { 0 };
    
    arr[1] = 1;
    arr[2] = 2;
    
    for(int i = 3; i <= n; i++)
        arr[i] = (arr[i - 1] % 1234567 + arr[i - 2] % 1234567) % 1234567;
    
    answer = arr[n];
    
    return answer;
}
   