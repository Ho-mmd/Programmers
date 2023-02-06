//겹치는 선분의 길이
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lines_rows는 2차원 배열 lines의 행 길이, lines_cols는 2차원 배열 lines의 열 길이입니다.
int solution(int** lines, size_t lines_rows, size_t lines_cols) {
    int answer = 0;
    int tmp[201] = { 0 };
    int j;
    
    for(int i = 0; i < lines_rows; i++) {
        j = lines[i][0] + 100;
        while(1) {
            tmp[j] += 1;
            j += 1;
            if(j >= lines[i][1] + 100)
                break;
        }
    }
    
    for(int i = 0; i < 201; i++)
        if(tmp[i] > 1)
            answer += 1;
    
    
    return answer;
}