//H-Index
def solution(citations):
    answer = 0
    
    tmp = citations;
    tmp.sort(reverse = True);
    
    st = tmp[0];


    while(1):
        cnt = 0;
        for i in tmp:
            if(i >= st):
                cnt += 1;
        if(st <= cnt and len(citations) - cnt <= cnt):
            return st;
        else:
            st -= 1;
    
    return answer