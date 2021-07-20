'''
arr를 줄바꿈없이 리스트형태로 한번에 출력해버려서 틀려버린 케이스입니다...
프로그램 구현보다 이거 고치느라 더 고생했음 ;

n=int(input())
arr=[]
for i in range(n):
    arr.append(input())

arr=list(set(arr))
arr.sort()
arr.sort(key= len)

print(arr)
'''

n=int(input())
arr=[]
for i in range(n):
    arr.append(input())

arr=list(set(arr))
arr.sort()
arr.sort(key= len)

for i in arr:
    print(i)
