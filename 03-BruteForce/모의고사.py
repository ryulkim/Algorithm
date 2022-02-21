def solution(answers):
    answer = []
    
    answer1 = [1,2,3,4,5]
    answer2 = [2, 1, 2, 3, 2, 4, 2, 5]
    answer3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    correct = [0,0,0]
    
    #1번 수포자가 찍는 방식 : 1, 2, 3, 4, 5, 반복 ...
    for i in range(len(answers)):
        if answers[i] == answer1[i%5]:
            correct[0] = correct[0] + 1
            
    #2번 수포자가 찍는 방식: 2, 1, 2, 3, 2, 4, 2, 5 반복... 
    for i in range(len(answers)):
        if answers[i] == answer2[i%8]:
            correct[1] = correct[1] + 1
    
    #3번 수포자가 찍는 방식 : 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 반복 ...
    for i in range(len(answers)):
        if answers[i] == answer3[i%10]:
            correct[2] = correct[2] + 1     
    
    #가장 많은 문제를 맞힌 문제의 수 구하기
    for i in range(0,3):
        if correct[i] >= correct[(i+1)%3] and correct[i] >= correct[(i+2)%3]:
            answer.append(i+1)
    
    return answer
