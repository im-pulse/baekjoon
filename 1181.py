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

'''
정답출력된 코드입니다. pypy3 기준 220ms 걸렸습니다.

n=int(input())
arr=[]
for i in range(n):
    arr.append(input())

arr=list(set(arr))
arr.sort()
arr.sort(key= len)

for i in arr:
    print(i) 
'''    
    
#시간을 더 줄여보기 위해 sys.st=din.readline()을 import 해보았습니다.
#pypy3 기준 176ms 걸렸습니다.
    
import sys

n=int(sys.stdin.readline())
arr=[]
for i in range(n):
    arr.append(sys.stdin.readline().strip())

arr=list(set(arr))
arr.sort()
arr.sort(key= len)

for i in arr:
    print(i) 
