//배열의 유사도
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// s1_len은 배열 s1의 길이입니다.
// s2_len은 배열 s2의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s1[], size_t s1_len, const char* s2[], size_t s2_len) {
    int answer = 0;
    int cnt;
    int flag;
    int *a1 = (int*)malloc(sizeof(int) * s1_len);
    int *a2 = (int*)malloc(sizeof(int) * s2_len);
    
    for(int i = 0; i < s1_len; i++) {
        cnt = 0; 
        while(1) {
            if(s1[i][cnt] != '\0')
                cnt += 1;
            else
                break;
        }
        a1[i] = cnt;
    }
    for(int i = 0; i < s2_len; i++) {
        cnt = 0; 
        while(1) {
            if(s2[i][cnt] != '\0')
                cnt += 1;
            else
                break;
        }
        a2[i] = cnt;
    }
    
    cnt = 0;
    
    for(int i = 0; i < s1_len; i++) {
        for(int j = 0; j < s2_len; j++) {
            if(a1[i] == a2[j]) {
                for(int k = 0; k < a1[i]; k++)
                    if(s1[i][k] != s2[j][k]) {
                        flag = 1;
                        break;
                    }
                if(flag == 0) 
                    cnt += 1;
                else
                    flag = 0;
            } 
        }
    }
    
    answer = cnt;
    
    return answer;
}