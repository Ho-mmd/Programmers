//예상 대진표
def solution(n,a,b):
    answer = 1
    
    if(a > b):
        tmp = a;
        a = b;
        b = tmp;
    
    if(n == 2):
        return 1;
    else:
        while(1):
            if(b - a == 1 and a % 2 == 1 and b % 2 == 0):
                return answer;

            if(a % 2 == 1):
                a = a // 2 + 1;
            else:
                a //= 2;

            if(b % 2 == 1):
                b = b // 2 + 1;
            else:
                b //= 2;

            answer += 1;
    
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    print('Hello Python')