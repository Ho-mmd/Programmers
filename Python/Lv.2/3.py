//이진 변환 반복하기
def solution(s):
    answer = [];
    tmp = '';
    cnt = 0;
    cn = 0;
    
    while(1):
        cn += 1;
        tmp = '';
        for i in s:
            if (i == '1'):
                tmp += i;
            else:
                cnt += 1;
        
        st = format(len(tmp), 'b');
        s = str(st);
        
        if(len(tmp) == 1):
            break;
    
    answer.append(cn);
    answer.append(cnt);
    
    return answer