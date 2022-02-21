from itertools import permutations
import math

#소수 판별 함수
def is_prime_number(x) :
    if x == 0 or x == 1:
        return 0
    
    for i in range(2,int(math.sqrt(x))+1) :
        if x % i == 0:
            return 0
        
    return 1

def solution(numbers):
    answer = 0
    result = []
    new_result = set()  #집합 자료형 : 중복 제거
    
    for i in range(1,len(numbers)+1) :
        result = list(permutations(numbers,i)) 
        for k in result :
            number = "".join(k)
            new_result.add(int(number))
            
    for x in new_result :
        answer = is_prime_number(int(x)) + answer
        
    return answer
