//문자열 정렬하기 (2)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void quick(int *arr, int start, int end) {
    if(start >= end)
        return;
    
    int pivot = start;
    int left = start + 1;
    int right = end;
    int tmp;
    
    while(left <= right) {
        while (left <= end && arr[left] <= arr[pivot])
            left += 1;
        while(right > start && arr[right] >= arr[pivot])
            right -= 1;
        if(left <= right) {
            tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
        }
        else {
            tmp = arr[right];
            arr[right] = arr[pivot];
            arr[pivot] = tmp;
        }
    }
    quick(arr, right + 1, end);
    quick(arr, start, right - 1);
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 100);
    int *tmp = (int*)malloc(sizeof(int) * 100);
    int i = 0;
    
    while(my_string[i] != '\0') {
        if('A' <= my_string[i] && my_string[i] <= 'Z')
            answer[i] = my_string[i] + 32;
        else
            answer[i] = my_string[i];
        i += 1;
    }
    
    answer[i] = '\0';
    i = 0;
    
    while(answer[i] != '\0') {
        tmp[i] = (int)answer[i];
        i += 1;
    }
    
    quick(tmp, 0, i - 1);
    
    for(int j = 0; j < i; j++)
        answer[j] = (char)tmp[j];
    
    return answer;
}