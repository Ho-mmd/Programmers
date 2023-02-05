//문자열 밀기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* A, const char* B) {
    int answer = -1;
    int cnt = 0, tmp = 0;
    int arr[27] = { 0 };
    
    while(A[cnt] != '\0')
        cnt += 1;
    
    for(int i = 0; i < cnt; i++) {
        arr[A[i] - 'a'] += 1;
        arr[B[i] - 'a'] += 1;
    }
    
    for(int i = 0; i < 27; i++) {
        if(arr[i] % 2 != 0)
            return -1;
    }
    
    if(cnt == 1) {
        if(A[0] == B[0])
            return 0;
        else
            return -1;
    }
    else if(cnt == 2) {
        if(A[0] == B[0] && A[1] == B[1])
            return 0;
        else if(A[1] == B[0] && A[0] == B[1])
            return 1;
        else
            return -1;
    }
    
    char st = A[0], le = A[cnt - 1], ri = A[1];
    
    for(int i = 1; i < cnt - 1; i++) {
        if(st == B[0] && le == B[cnt - 1] && ri == B[1]) {
            answer = 0;
            return answer;
        }
        if(st == B[i] && le == B[i - 1] && ri == B[i + 1]) {
            answer = i;
            return answer;
        }
    }
    
    if(st == B[cnt - 1] && le == B[cnt - 2] && ri == B[0]) {
        answer = cnt - 1;
        return answer;
    }
            
    
    return answer;
}