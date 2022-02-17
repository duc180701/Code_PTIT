testCase = int(input())
while testCase > 0:
    ans = []
    n, d = map(int, input().split())
    x = [int(x) for x in input().split()]
    cnt = d % n
    ans = x[cnt:] + x[:cnt]
    for i in range(len(ans)):
        print(ans[i], end=" ")
    print()
    testCase -= 1
