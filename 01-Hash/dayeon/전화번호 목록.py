def solution(phone_book):
    phone_book.sort()
    
    for j in range(len(phone_book)-1) :
        x = phone_book[j]
        if x == phone_book[j+1][:len(x)] :
            return False
    return True
