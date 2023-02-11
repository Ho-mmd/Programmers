//프린터
def solution(priorities, location):
    answer = 0
    cnt = 0;
    
    while(1):
        if(max(priorities) != priorities[0]):
            priorities.append(priorities.pop(0));
            location -= 1;
        elif(max(priorities) == priorities[0] and location == 0):
            answer = cnt + 1;
            break;
        else:
            cnt += 1;
            location -= 1;
            priorities.pop(0);
            
        if(location < 0):
            location = len(priorities) - 1;
        
    return answer   