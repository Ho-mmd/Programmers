//문자열 정렬하기 (1)
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
        while(right > start && arr[right] > arr[pivot])
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
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 101);
    int i = 0, j = 0;
    
    while(my_string[i] != '\0') {
        if(0 <= (my_string[i] - '0') && (my_string[i] - '0') <= 9) {
            answer[j] = my_string[i] - '0';
            j += 1;
        }
        i += 1;
    }
    
    quick(answer, 0, j - 1);
    
    return answer;
}