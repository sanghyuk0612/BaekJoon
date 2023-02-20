def solution(number, k):
    number = list(number) 
    while (k != 0 ):
        i=0
        if (len(number) ==1):
            break
        while (i<len(number)):
            if (number[i]<number[i+1]):
                number.pop(i)
                k -=1
                break
            if (i+2==len(number)):
                number.pop(i+1)
                k-=1
                break
            i+=1
    
    answer = ''.join(number)

    return answer