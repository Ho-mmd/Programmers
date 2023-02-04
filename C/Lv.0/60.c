//A로 B 만들기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    int arr1[27] = { 0 };
    int arr2[27] = { 0 };
    int i = 0, j = 0;
    int answer = 1;
    
    while(before[i] != '\0') {
        arr1[before[i] - 'a'] += 1;
        i += 1;
    }
    
    while(after[j] != '\0') {
        arr2[after[j] - 'a'] += 1;
        j += 1;
    }
    
    for(int i = 0; i < 27; i++) {
        if(arr1[i] != arr2[i]) {
            answer = 0;
            break;
        }        
    }
    
    return answer;
}