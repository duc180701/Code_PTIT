n = int(input())
while n > 0:
    num = [int(i) for i in input().split()]
    a = num[0]
    p = num[1]
    s = 0
    for i in range(2, a+1):
        j = i
        while j % p == 0:
            s += 1
            j /= p
    print(s)
    n -= 1
