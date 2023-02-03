//최댓값 만들기 (2)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void quick(int *arr, int start, int end) {
    if (start >= end)
        return;
    
    int pivot = start;
    int left = start + 1;
    int right = end;
    int tmp;
    
    while(left <= right) {
        while (left <= end && arr[pivot] >= arr[left])
            left += 1;
        while(right > start && arr[pivot] <= arr[right])
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

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    quick(numbers, 0, numbers_len - 1);
    
    int tmp1 = numbers[0] * numbers[1];
    int tmp2 = numbers[numbers_len - 1] * numbers[numbers_len - 2];
    int answer = 0;
    
    if(tmp1 > tmp2)
        answer = tmp1;
    else
        answer = tmp2;
    
    return answer;
}