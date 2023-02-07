//영어 끝말잇기
def solution(n, words):
    answer = [0, 0]
    chk = [];
    
    chk.append(words[0]);
    
    for i in range(1, len(words)):        
        if(chk[-1][-1] != words[i][0] or words[i] in chk):
            answer[0] = (i + 1) % n;
            answer[1] = (i + 1) / n;
            if(answer[0] == 0):
                answer[0] = n;
            if(answer[1] - int(answer[1]) != 0):
                answer[1] = int(answer[1]) + 1; 
            break;
            
        else:
            chk.append(words[i]);
    
    # [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    print('Hello Python')

    return answer