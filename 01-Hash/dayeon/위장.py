def solution(clothes):
    clothes_dict = {}
    answer = 1
    
    for i in clothes:
        clothes_kinds = i[1]
        clothes_names = i[0]
        
        if clothes_kinds in clothes_dict:
            clothes_dict[clothes_kinds].append(clothes_names)
        else:
            clothes_dict[clothes_kinds] = [clothes_names]

    for j in clothes_dict.keys() :
        answer = answer * (len(clothes_dict[j])+1)
    
    return answer - 1
