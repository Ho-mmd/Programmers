//괄호 회전하기
def solution(s):
    answer = 0
    tmp = list(s);
    
    for i in range(len(tmp)):
        arr = [];
        for j in tmp:
            if(len(arr) > 0):
                if(j == '('):
                    arr.append(j);
                elif (j == '{'):
                    arr.append(j);
                elif (j == '['):
                    arr.append(j);
                elif (j == ')'):
                    if(arr[-1] == '('):
                        arr.pop();
                elif (j == '}'):
                    if(arr[-1] == '{'):
                        arr.pop();
                elif (j == ']'):
                    if(arr[-1] == '['):
                        arr.pop();
            else:
                arr.append(j);
        if(len(arr) == 0):
            answer += 1;
        tmp.append(tmp.pop(0));            
    
    return answer