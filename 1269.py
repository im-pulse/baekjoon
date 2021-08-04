a,b=map(int,(input().split()))

arr=set(input().split())
arr1=set(input().split())

print(len(arr-arr1)+len(arr1-arr))
