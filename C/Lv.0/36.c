//문자열안에 문자열
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int cnt1 = 0;
    int cnt2 = 0;
    
    while(1) {
        if(str1[cnt1] != '\0')
            cnt1 += 1;
        if(str2[cnt2] != '\0')
            cnt2 += 1;
        if(str1[cnt1] == '\0' && str2[cnt2] == '\0')
            break;
    }
    
    int answer = 2;
    int j = 0;
    
    for(int i = 0; i < cnt1; i++) {
       while(1) {   
           if(str1[i] == str2[j]) {
               j += 1;
               if (j == cnt2){
                   answer = 1;
               }
               break;
           }
           else {
               j = 0;
               break;
           }
       }
    }
    
    return answer;
}