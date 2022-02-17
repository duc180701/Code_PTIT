testCase = int(input())
while testCase > 0:
    n = int(input())
    x = [int(x) for x in input().split()]
    x.sort()
    maxCount = 1
    cnt = 1
    res = x[0]
    for i in range(1, n):
        if x[i] == x[i - 1]:
            cnt += 1
        else:
            if cnt > maxCount:
                maxCount = cnt
                res = x[i - 1]
            cnt = 1
    if cnt > maxCount:
        maxCount = cnt
        res = x[n - 1]
    if maxCount > (n / 2):
        print(res)
    else:
        print("NO")
    testCase -= 1
