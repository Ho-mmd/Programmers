//이진수 더하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* bin1, const char* bin2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 12);
    char tmp[12] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '\0' };
    char tmp1[12] = { '0' };
    char tmp2[12] = { '0' };
    int i = 0, j = 0, k = 0;
    int a = 0, b = 0;
    
    while(bin1[a] != '\0') {
        tmp1[a] = bin1[a];
        a += 1;
    }
    
    tmp1[a] = '\0';
    
    while(bin2[b] != '\0') {
        tmp2[b] = bin2[b];
        b += 1;
    }
    
    tmp2[b] = '\0';
    
    a -= 1;
    b -= 1;

    while(1) {
        if(a < 0 && b < 0)
            break;
        
        else if(a >= 0 && b >= 0) {
            if(tmp1[a] == '0' && tmp2[b] == '0') {
                if(tmp[k] == '0')
                    tmp[k] = '0';
                else
                    tmp[k] = '1';
            }
            
            else if((tmp1[a] == '0' && tmp2[b] == '1') || (tmp1[a] == '1' && tmp2[b] == '0'))
            {
                if(tmp[k] == '0')
                    tmp[k] = '1';
                else {
                    tmp[k] = '0';
                    tmp[k + 1] = '1';
                }
            }

            else {
                if(tmp[k] == '0') {
                    tmp[k] = '0';
                    tmp[k + 1] = '1';
                }   
                else {
                    tmp[k] = '1';
                    tmp[k + 1] = '1';
                }
            }
        }
        else {
            if(a < 0) {
                if(tmp[k] == '1' && tmp2[b] == '1') {
                    tmp[k] = '0';
                    tmp[k + 1] = '1';
                }
                else
                    tmp[k] = tmp2[b];
            }
            else if(b < 0) {
                if(tmp[k] == '1' && tmp1[a] == '1') {
                    tmp[k] = '0';
                    tmp[k + 1] = '1';
                }
                else
                    tmp[k] = tmp1[a];
            }
        }
        
        printf("%s\n", tmp);
        a -= 1;
        b -= 1;
        k += 1;
    }
    
    tmp[k + 1] = '\0';
    j = 0;
           
    if(tmp[k] == '0')
        k -= 1;
    
     for(int i = k; i >= 0; i--) {
         answer[j] = tmp[i];
         j += 1;
     }
    
    answer[j] = '\0';
                
    return answer;
}