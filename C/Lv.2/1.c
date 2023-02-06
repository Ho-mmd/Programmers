//최솟값 만들기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void quick(int* arr, int start, int end) {
    if(start >= end)
        return;
    
    int pivot = start;
    int left = start + 1;
    int right = end;
    int tmp;
    
    while(left <= right) {
        while(left <= end && arr[pivot] >= arr[left])
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

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.
int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    
    quick(A, 0, A_len - 1);
    quick(B, 0, B_len - 1);
    
    for(int i = 0; i < A_len; i++) {
        answer += A[i] * B[B_len - i - 1];
    }
    
    return answer;
}