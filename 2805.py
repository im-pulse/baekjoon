a,b = map(int, input().split())
ans= list(map(int, input().split()))
low= 0 
high = 1000000000
while low <= high:
    mid = (low + high) // 2
    num = 0
    for i in ans:
        if i - mid > 0:
            num += i - mid 
    if num >= b: 
        low = mid + 1
    else: 
        high = mid - 1
print(high)
