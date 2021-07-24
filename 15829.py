'''
최근 알고리즘 문제풀이가 DP/그리디/게임이론 쪽에만 치중되어 있는거 같아 여러가지 문제들을 풀어보기 위해 고민 중입니다.

부분점수만 인정받은 코드

import math

n=int(input())

temp=input()
arr=[]
ans=0

for i in range(0, len(temp)):
    arr.append(temp[i])
    ans= ans + ((ord(arr[i])-96) * math.pow(31,i))

ans= ans%1234567891

print(ans) 
'''
n=int(input())

temp=input()
arr=[]
ans=0

for i in range(0, len(temp)):
    arr.append(temp[i])
    ans= ans + ((ord(arr[i])-96) * (31**i))

ans= ans%1234567891

print(ans)   
