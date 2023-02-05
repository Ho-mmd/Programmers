//옹알이 (1)
def solution(babbling):
    arr = ["aya", "ye", "woo", "ma"];
    flag = 0;
    answer = 0
    
    for i in babbling:
        flag = 0;
        for j in arr:
            if j in i:
                flag += len(j);
        if(len(i) == flag):
            answer += 1;
    
    return answer