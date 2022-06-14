def solve():
    n = int(input())
    L = [int(i) for i in input().split()]
    L.sort()
    res = 0
    for i in range(1, len(L)):
        if L[i] - L[i - 1] > 1:
            res += L[i] - L[i - 1] - 1
    print(res)


T = int(input())
while T > 0:
    T -= 1
    solve()
