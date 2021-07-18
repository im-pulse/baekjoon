n = int(input()) 
meeting = []

for i in range(n): 
    a1, a2 = map(int, input().split()) 
    meeting.append((a1, a2)) #list에는 회의 번호, 시작 시간, 종료 시간이 순서대로 들어간다

meeting.sort(key=lambda x: x[0]) #시작 시간 기준으로 정렬 (sort 함수는 오름차순으로 정렬해준다)
meeting.sort(key=lambda x: x[1]) #끝나는 시간 기준으로 한번 더 정렬한 이유?? 

ans= []
cnt = 0 
start_time = 0 
for i in range(n): 
    if meeting[i][0] >= start_time: 
        start_time = meeting[i][1] 
        cnt += 1

print(cnt)
