//구명보트
def solution(people, limit):
    answer = 0            
    
    s = people;
    s.sort();
    i, j = 0, len(s) - 1;
    
    
    while(1):
        if(s[i] + s[j] <= limit):
            answer += 1;
            i += 1;
            j -= 1;
        else:
            answer += 1;
            j -= 1;

        if(i > j):
            break;

    return answer