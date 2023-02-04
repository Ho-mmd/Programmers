//영어가 싫어요
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long poy(long long n) {
    long long i = 1;
    
    for(long long j = 0; j < n; j++)
        i *= 10;
    
    return i;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
long long solution(const char* numbers) {
    long long answer = 0;
    long long arr[15] = { 0 };
    int i = 0, k = 0;
    int len = 0;
    
    while(numbers[len] != '\0')
        len += 1;
    
    while(1) {
        if(numbers[i] == 'o' && numbers[i + 1] == 'n' && numbers[i + 2] == 'e') {
            arr[k] = 1;
            i += 3;
        }
        else if(numbers[i] == 't' && numbers[i + 1] == 'w' && numbers[i + 2] == 'o') {
            arr[k] = 2;
            i += 3;
        }
        else if(numbers[i] == 't' && numbers[i + 1] == 'h' && numbers[i + 2] == 'r' && numbers[i + 3] == 'e' && numbers[i + 4] == 'e') {
            arr[k] = 3;
            i += 5;
        }
        else if(numbers[i] == 'f' && numbers[i + 1] == 'o' && numbers[i + 2] == 'u' && numbers[i + 3] == 'r') 
        {
            arr[k] = 4;
            i += 4;
        }
        else if(numbers[i] == 'f' && numbers[i + 1] == 'i' && numbers[i + 2] == 'v' && numbers[i + 3] == 'e')
        {
            arr[k] = 5;
            i += 4;
        }
        else if(numbers[i] == 's' && numbers[i + 1] == 'i' && numbers[i + 2] == 'x') {
            arr[k] = 6;
            i += 3;
        }
        else if(numbers[i] == 's' && numbers[i + 1] == 'e' && numbers[i + 2] == 'v' && numbers[i + 3] == 'e' && numbers[i + 4] == 'n') {
            arr[k] = 7;
            i += 5;
        }
        else if(numbers[i] == 'e' && numbers[i + 1] == 'i' && numbers[i + 2] == 'g' && numbers[i + 3] == 'h' && numbers[i + 4] == 't') {
            arr[k] = 8;
            i += 5;
        }
        else if(numbers[i] == 'n' && numbers[i + 1] == 'i' && numbers[i + 2] == 'n' && numbers[i + 3] == 'e') 
        {
            arr[k] = 9;
            i += 4;
        }
        else if(numbers[i] == 'z' && numbers[i + 1] == 'e' && numbers[i + 2] == 'r' && numbers[i + 3] == 'o')
        {
            arr[k] = 0;
            i += 4;
        }
        k += 1;
        
        if(i >= len)
            break;
    }
    
    int j = 0;
    
    for(int i = k - 1; i >= 0; i--) {
        answer += (arr[j] * poy(i));
        j += 1;
    }
    
    return answer;
}