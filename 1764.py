a, b = map(int,(input().split()))

arr=[]
arr1=[]

for i in range (a):
    arr.append(input())

for j in range (b):
    arr1.append(input())    

ans = list(set(arr)&set(arr1))
ans.sort()
print(len(ans))

for i in range(len(ans)):
    print(ans[i])


'''
구글링을 통해 arr에 append 하는 과정을 변경하였더니 런타임이 30% 가량 향상되었습니다.
sys.readline은 무적입니다.

import sys

a, b = map(int, sys.stdin.readline().split())

arr=[sys.stdin.readline().strip() for i in range(a)]
arr1=[sys.stdin.readline().strip() for i in range(b)]

ans = list(set(arr)&set(arr1))
ans.sort()
print(len(ans))

for i in range(len(ans)):
    print(ans[i])  
'''
