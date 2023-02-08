//위장
def solution(clothes):
    answer = 0
    arr = [];
    cnt = [0] * 30;
    
    for i in range(len(clothes)):
        if(clothes[i][1] not in arr):
            arr.append(clothes[i][1]);
            tmp = arr.index(clothes[i][1]);
            cnt[tmp] = 1;
        else:
            tmp = arr.index(clothes[i][1]);
            cnt[tmp] += 1;

    a = 1; 
            
    for i in cnt:
        if i != 0:
            a *= (i + 1);
    
    answer = a - 1;
    
    return answer