foo = input()

arr=[]

arr.append(foo)

for i in range(len(foo)-1):
    foo=foo[1:]
    arr.append(foo)

arr.sort()

for i in arr:
    print(i)
