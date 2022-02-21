def solution(array, commands):
    answer = []
    
    for x in commands :
        i = x[0]
        j = x[1]
        k = x[2]
        
        new_array = array[i-1:j]  #i번째부터 j번째까지 자르기
        new_array.sort()          #정렬하기
        answer.append(new_array[k-1])   #정렬한 배열의 k번째 값 구하기
        
    return answer
