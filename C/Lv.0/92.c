//평행
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int answer = 0;
    float x1 = dots[0][0] - dots[1][0], y1 = dots[0][1] - dots[1][1];
    float xx1 = dots[2][0] - dots[3][0], yy1 = dots[2][1] - dots[3][1];
    float x2 = dots[0][0] - dots[2][0], y2 = dots[0][1] - dots[2][1];
    float xx2 = dots[1][0] - dots[3][0], yy2 = dots[1][1] - dots[3][1];
    float x3 = dots[0][0] - dots[3][0], y3 = dots[0][1] - dots[3][1];
    float xx3 = dots[1][0] - dots[2][0], yy3 = dots[1][1] - dots[2][1];
    
    if(y1 / x1 == yy1 / xx1 || y2 / x2 == yy2 / xx2 && y3 / x3 == yy3 / xx3)
        answer = 1;
    
    return answer;
}