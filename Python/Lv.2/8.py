//카펫
def solution(brown, yellow):
    answer = []
    t1 = 0;
    t2 = 0;
    
    for i in range(1, yellow + 1):
        if(yellow % i == 0):
            t1 = (i + yellow // i + 2) * 2;
            if(t1 == brown):
                t2 = i;
                break;
        
    t1 = yellow // t2;
    
    if(t1 >= t2):
        answer.append(t1 + 2);
        answer.append(t2 + 2);
    else:
        answer.append(t2 + 2);
        answer.append(t1 + 2);
        
    return answer