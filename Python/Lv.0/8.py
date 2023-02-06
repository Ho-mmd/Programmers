//OX퀴즈
def solution(quiz):
    answer = []
    
    for i in range(len(quiz)):
        for j in range(len(quiz[i])):
            if(quiz[i][j] == '='):
                if(eval(quiz[i][:j]) == eval(quiz[i][(j + 1):])):
                    answer.append("O");
                else:
                    answer.append("X");
                break;
    
    return answer