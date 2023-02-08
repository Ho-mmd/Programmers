//[1차] 캐시
def solution(cacheSize, cities):
    answer = 0
    tmp = [];
    tr = 0;
    ti = 0;
    
    
    
    if(cacheSize == 0):
        return len(cities) * 5;
    
    for i in cities:
        i = i.upper();
        if(len(tmp) < cacheSize and i not in tmp):
            tmp.insert(0, i);
            answer += 5;
        elif(i in tmp):
            tr = tmp.index(i);
            ti = tmp[tr];
            tmp[1:tr + 1] = tmp[0 : tr];
            tmp[0] = ti;
            answer += 1;
        elif(len(tmp) == cacheSize):
            tmp[1 : cacheSize] = tmp[0 : cacheSize - 1];
            tmp[0] = i;
            answer += 5;
    
    return answer
