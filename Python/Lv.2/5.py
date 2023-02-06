//다음 큰 숫자
def solution(n):
    answer = 0
    a = 0;
    
    tmp = format(n, 'b');
    for i in tmp:
        if (i == '1'):
            a += 1;
    
    n += 1;
    
    while(1):
        b = 0;
        tmp = format(n, 'b');
        for i in tmp:
            if (i == '1'):
                b += 1;
        if(b == a):
            break;
            
        n += 1;
    
    answer = n;
    
    return answer