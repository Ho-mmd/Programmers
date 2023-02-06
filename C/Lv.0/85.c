//저주의 숫자 3
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for(int i = 0; i < n; i++) {
        answer += 1;
        
        while(1) {
            if((answer / 10) % 10 == 3 || answer / 10  == 3 || answer % 10 == 3 || answer % 3 == 0)
                answer += 1;
            else
                break;
        }
        printf("%d\n", answer);
    }
    return answer;
}