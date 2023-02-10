//튜플
def solution(s):
    answer = []
    
    arr = s[2:-2];
    arr = list(arr.split("},{"))
    
    arr.sort(key = lambda x : len(x))
    
    for i in arr:
        tmp = i.split(',');
        for j in tmp:
            if int(j) not in answer:
                answer.append(int(j));

    return answer