'''
vscode에서는 정상적으로 동작하였지만 채점시 메모리가 초과된 코드입니다.

n=int(input())
arr=list(map(int, input().split()))
temp=arr
 
for i in range(n-1):
    temp.extend(map(int, input().split()))
    temp.sort(reverse=True)
    arr=temp[:n]
 
print(arr[n-1])
'''

#백준 제출까지 통과한 코드입니다.

n=int(input())
 arr=list(map(int, input().split()))
 
for i in range(n-1):
    temp = sorted(list(map(int, input().split())) + arr, reverse=True)
    arr = temp[:n] 
 
print(arr[n-1])
