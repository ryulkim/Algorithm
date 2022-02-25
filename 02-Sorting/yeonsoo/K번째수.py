def solution(array, commands):
    answer = []
    size_ = len(commands)
    for command in commands:
        a,b,c = command
        answer.append((sorted(array[a-1:b]))[c-1])
    return answer

# def solution(array, commands):
#     return list(map(lambda x:sorted(array[x[0]-1:x[1]])[x[2]-1], commands))
