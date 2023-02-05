//직사각형 넓이 구하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int answer = 0;
    int x_tmp, y_tmp;
    
    x_tmp = dots[0][0];
    y_tmp = dots[0][1];
    
    for(int i = 1; i < dots_rows; i++) {
        if(x_tmp != dots[i][0] && x_tmp == dots[0][0]) {
            x_tmp -= dots[i][0];
        }
        if(y_tmp != dots[i][1] && y_tmp == dots[0][1]) {
            y_tmp -= dots[i][1];
        }
        if(x_tmp != dots[0][0] && y_tmp != dots[0][1])
            break;
    }
    
    answer = x_tmp * y_tmp;
    
    if(answer < 0)
        answer *= -1;
        
    return answer;
}