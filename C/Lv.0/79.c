//로그인 성공?
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// id_pw_len은 배열 id_pw의 길이입니다.
// db_rows는 2차원 배열 db의 행 길이, db_cols는 2차원 배열 db의 열 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* id_pw[], size_t id_pw_len, const char*** db, size_t db_rows, size_t db_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 11);
    answer[0] = 'q';
    int a, b, flag;
    
    for(int i = 0; i < db_rows; i++) {
        a = 0, b = 0, flag = 0;
        while(1) {
            if(id_pw[0][a] == db[i][0][b]) {
                a += 1;
                b += 1;
            }
            else {
                break;
            }
            
            if(id_pw[0][a] == '\0' && db[i][0][b] == '\0') {
                flag = 1;
                break;
            }
            else if(id_pw[0][a] == '\0' || db[i][0][b] == '\0') {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            a = 0, b = 0, flag = 0;
            while(1) {
                if(id_pw[1][a] == db[i][1][b]) {
                    a += 1;
                    b += 1;
                }
                else {
                    flag = 2;
                    break;
                }
                
                if(id_pw[1][a] == '\0' && db[i][1][b] == '\0') {
                    flag = 1;
                    break;
                }
                else if(id_pw[1][a] == '\0' || db[i][1][b] == '\0') {
                    flag = 2;
                    break;
                }
            }
        }
        if(flag == 1) {
            answer = "login";
            return answer;
        }
        else if(flag == 2) {
            answer = "wrong pw";
            return answer;
        }
        answer = "fail";
    }
    
    return answer;
}