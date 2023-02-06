//다항식 더하기
def solution(polynomial):
    answer = ''
    arr1 = list(polynomial.split(' + '));
    arrx = [];
    arrn = [];
    tmpx = 0;
    tmpn = 0;
    
    for i in arr1:
        if ('x' in i):
            arrx.append(i);
        else:
            arrn.append(i);
    
    for i in range(len(arrx)):
        tmp = '0';
        for j in range(len(arrx[i])):
            if(len(arrx[i]) == 1):
                tmpx += 1;
            elif(arrx[i][j] != 'x'):
                tmp += arrx[i][j];
        tmpx += int(tmp);
        
    for i in arrn:
        tmpn += int(i);
    
    if(tmpx == 0):
        answer = str(tmpn);
    elif(tmpx == 1):
        if (tmpn == 0):
            answer = 'x';
        else:
            answer = 'x + ' + str(tmpn);
    else:
        if(tmpn == 0):
            answer = str(tmpx) + 'x';
        else:
            answer = str(tmpx) + 'x + ' + str(tmpn); 
    
    return answer