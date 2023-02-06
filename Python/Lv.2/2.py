//JadenCase 문자열 만들기
def solution(s):
    answer = ''
    
    s = s.lower();
    
    answer += s[0].upper();
    
    for i in range(1, len(s)):
        if(s[i - 1] == ' ' and s[i].isalpha()):
            answer += s[i].upper();
        else:
            answer += s[i];
            
    return answer