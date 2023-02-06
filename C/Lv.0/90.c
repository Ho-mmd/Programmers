//안전지대
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// board_rows는 2차원 배열 board의 행 길이, board_cols는 2차원 배열 board의 열 길이입니다.
int solution(int** board, size_t board_rows, size_t board_cols) {
    int answer = 0;
    
    for(int i = 0; i < board_rows; i++) {
        for(int j = 0; j < board_cols; j++) {
            if(board[i][j] == 1) {
                if(i + 1 < board_rows && board[i + 1][j] == 0)
                    board[i + 1][j] = 2;
                if(i - 1 >= 0 && board[i - 1][j] == 0)
                    board[i - 1][j] = 2;
                if(j + 1 < board_cols && board[i][j + 1] == 0)
                    board[i][j + 1] = 2;
                if(j - 1 >= 0 && board[i][j - 1] == 0)
                    board[i][j - 1] = 2;
                if(i + 1 < board_rows && j + 1 < board_cols && board[i + 1][j + 1] == 0)
                    board[i + 1][j + 1] = 2;
                if(i + 1 < board_rows && j - 1 >= 0 && board[i + 1][j - 1] == 0)
                    board[i + 1][j - 1] = 2;
                if(i - 1 >= 0 && j + 1 < board_cols && board[i - 1][j + 1] == 0)
                    board[i - 1][j + 1] = 2;
                if(i - 1 >= 0 && j - 1 >= 0 && board[i - 1][j - 1] == 0)
                    board[i - 1][j - 1] = 2;
            }
        }
    }
    
    for(int i = 0; i < board_rows; i++) {
        for(int j = 0; j < board_cols; j++) {
            if(board[i][j] == 0)
                answer += 1;
        }
    }
    
    return answer;
}