# 백준 2420

a, b = map(int, input().split())

print(abs(a-b))

# 백준 2480

a, b, c = map(int, input().split())

arr=[]

if(a==b==c):
    print(int(10000)+a*1000)
elif a==b:
    print(int(1000)+a*100)
elif b==c:
    print(int(1000)+b*100)
elif a==c:
    print(int(1000)+a+100)
else:
    arr.append(a)
    arr.append(b)
    arr.append(c)
    print(max(arr)*100)


# 백준 2525

a, b = map(int, input().split())

c=int(input())

b=b+c

while(b>59):
    b=b-60
    a=a+1
while(a>23):
    a=a-24

print(a,b)        

# 백준 2530 

a, b, c = map(int, input().split())

d=int(input())

c=d+c

while(c>59):
    c=c-60
    b=b+1

while(b>59):
    b=b-60
    a=a+1

while(a>23):
    a=a-24


print(a,b,c)

#백준 2752

arr = map(int, input().split())

arr=sorted(arr)

for i in arr:
    print(i)


'''
백준 4299
얘는 심지어 한번 틀렸다..
'''

a,b = map(int, input().split())

if (a+b<0 or a-b<0 or (a+b)%2):
    print(-1)
else:
    c = (a + b) // 2
    d = a-c
    print(max(c, d), min(c, d))

#백준 10817
arr = map(int, input().split())

arr=sorted(arr)

print(arr[1])

#백준 11718
try:
    while 1:
        ans=input()
        print(ans)
        continue
except:
    exit()    
    
