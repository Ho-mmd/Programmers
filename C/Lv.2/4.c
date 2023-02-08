//N개의 최소공배수
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

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int answer = 0;
    int i = 2;
    int tmp;
    
    if(arr_len == 1)
        return arr[0];
    else if(arr_len == 2)
        return arr[0] * arr[1] / gcd(arr[0], arr[1]);
    else {
        tmp = arr[0] * arr[1] / gcd(arr[0], arr[1]);
        while(1) {
            tmp = tmp * arr[i] / gcd(tmp, arr[i]);
            i += 1;
            if(i == arr_len) {
                answer = tmp;
                break;
            }
        }
    }
  
    return answer;
}