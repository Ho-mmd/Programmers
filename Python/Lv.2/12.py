//점프와 순간 이동
def solution(n):
    ans = 0
    
    if(n == 1):
        return 1;
    while(1):
        if(n % 2 == 1):
            ans += 1;
        n //= 2;
        if(n == 1):
            ans += 1;
            break;
    
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    print('Hello Python')

    return ans