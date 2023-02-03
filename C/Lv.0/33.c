//중앙값 구하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void quick(int arr[], int start, int end) {
    if(start >= end) 
        return;
    
    int pivot = start;
    int left = start + 1;
    int right = end;
    int tmp;
    
    while(left <= right) {
        while (left <= end && arr[left] <= arr[pivot])
            left += 1;
        while(start < right && arr[right] >= arr[pivot])
            right -= 1;

        if(left <= right) {
            tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
        }
        else {
            tmp = arr[pivot];
            arr[pivot] = arr[right];
            arr[right] = tmp;
        }
    }
    quick(arr, right + 1, end);
    quick(arr, start, right - 1);
}

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    
    quick(array, 0, array_len - 1);
    
    answer = array[(int)(array_len / 2)];
    
    return answer;
}