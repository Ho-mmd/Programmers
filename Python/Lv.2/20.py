//연속 부분 수열 합의 개수
def solution(elements):
    answer = 0
    
    tmp = set();
    le = len(elements);
    elements *= 2;
    
    for i in range(le):
        for j in range(le):
            tmp.add(sum(elements[j:j + i + 1]));
        
    answer = len(tmp);
    
    return answer