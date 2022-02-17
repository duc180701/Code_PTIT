testCase = int(input())

while testCase > 0:
    ans = 0
    s = [float(x) for x in input().split()]
    while s[0] < s[2]:
        s[0] += s[0] * (s[1] / 100)
        ans += 1
    print(ans)
    testCase -= 1