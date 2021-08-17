def solution(n, m):

    from math import gcd
    answer = []
    answer.append(gcd(n,m))
    answer.append(n*m//gcd(n,m))
    return answer

n,m = map(int,input().split())

print(solution(n,m))
