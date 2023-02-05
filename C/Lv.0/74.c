//외계어 사전
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// spell_len은 배열 spell의 길이입니다.
// dic_len은 배열 dic의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* spell[], size_t spell_len, const char* dic[], size_t dic_len) {
    int answer = 1;
    int k, flag;
    int *arr = (int *)malloc(sizeof(int) * spell_len);
    
    for(int i = 0; i < dic_len; i++) {
        k = 0;
        flag = 0;
        for(int i = 0; i < spell_len; i++)
            arr[i] = 0;
        while(1) {
            for(int j = 0; j < spell_len ; j++) {
                if(dic[i][k] == spell[j][0]) {
                    arr[j] += 1;
                }
            }
            k += 1;
            if(dic[i][k] == '\0')
                break;
        }
        
        for(int t = 0; t < spell_len; t++) {
            if(arr[t] != 1)
                flag = 1;
        }  
        if(flag == 0)
            break;
    }
    
    if(flag == 0)
        return answer;
    else
        return answer + 1;
    
}