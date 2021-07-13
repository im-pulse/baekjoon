from bisect import bisect_left

arr = []
i=int(input())
for _ in range(i):
    arr.append(int(input()))

dp = []
for i in arr:
    k = bisect_left(dp, i)
    if len(dp) <= k:
        dp.append(i)
    else:
        dp[k] = i
print(len(arr) - len(dp))
