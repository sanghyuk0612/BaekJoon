def solution(citations):
    answer = 0
    
    citations.sort()
    
    
    
    for i in range(len(citations)):
        
        h = len(citations)-i
        # 2. citations[i]가 hIndex보다 크거나 같으면, answer에 hIndex를 저장하고 반복을 멈춥니다. 
        if citations[i] >= h:
            answer = h
            break
    
    return answer