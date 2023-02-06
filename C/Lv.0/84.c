//특이한 정렬
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

int poy(int n) {
    if(n < 0)
        return -n;
    else
        return n;
}

// numlist_len은 배열 numlist의 길이입니다.
int* solution(int numlist[], size_t numlist_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * numlist_len);
    int* tmp = (int*)malloc(sizeof(int) * numlist_len);
    
    for(int i = 0; i < numlist_len; i++)
        tmp[i] = numlist[i] - n;
    
    quick(tmp, 0, numlist_len - 1);
    
    int min = 0, left, right;
    
    for(int i = 0; i < numlist_len; i++) {
        if(poy(tmp[min]) > poy(tmp[i]))
            min = i;
    }
    
    answer[0] = tmp[min] + n;
    left = min - 1, right = min + 1;
    min = 1;
    
    while(1) {
        if(left >= 0 && right < numlist_len) {
            if(poy(tmp[left]) < poy(tmp[right])) {
                answer[min] = tmp[left] + n;
                min += 1;
                left -= 1;
            }
            else {
                answer[min] = tmp[right] + n;
                min += 1;
                right += 1;
            }
        }
        else if(left < 0) {
            answer[min] = tmp[right] + n;
            min += 1;
            right += 1;
        }
        else if(right >= numlist_len) {
            answer[min] = tmp[left] + n;
            min += 1;
            left -= 1;
        }
        
        if(left < 0 && right >= numlist_len)
            break;
    }
    
    return answer;
}