def ans(n, m):
    sum = n
    for i in range(2, m+1 ):
        tmp = n + i
        tmp2 = i * i
        cnt = tmp // tmp2
        sum += cnt
    return sum

t = int(input())
while t > 0:
    n, m = map(int, input().split())    
    print(ans(n, m))
    t -= 1
