//짝지어 제거하기
def solution(s):
    answer = -1
    
    ss = []; 
    i = 0;
    
    ss.append(s[i]);
    
    while(1):
        i += 1;
        
        if(i > len(s) - 1):
            break;
        
        if(len(ss) != 0):
            if(ss[-1] == s[i]):
                ss.pop();
            else:
                ss.append(s[i]);
        else:
            ss.append(s[i]);
    
    
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    if(len(ss) == 0):
        answer = 1;
    else:
        answer = 0;
    
    return answer