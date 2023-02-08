//행렬의 곱셈
def solution(arr1, arr2):
    len1 = len(arr1);
    len2 = len(arr2[0]);
    
    answer = [[0 for i in range(len2)] for i in range(len1)]
    
    for i in range(len(arr1)):
        for j in range(len2):
            sm = 0;
            for k in range(len(arr2)):
                sm += arr1[i][k] * arr2[k][j];
            answer[i][j] = sm;

    return answer