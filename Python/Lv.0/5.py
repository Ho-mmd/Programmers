//구슬을 나누는 경우의 수
def solution(balls, share):
    answer = 0
    tmp1, tmp2 = 1, 1;
    
    for i in range(share + 1, balls + 1):
        tmp1 *= i;
    for i in range(1, balls - share + 1):
        tmp2 *= i;
        
    answer = tmp1 / tmp2;
    
    return answer