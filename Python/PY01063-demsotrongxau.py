testCase = int(input())
while testCase > 0:
    s1 = str(input())
    s2 = str(input())
    ans = 0
    while s1.find(s2) >= 0:
        s1 = s1[0:s1.find(s2)] + s1[s1.find(s2) + len(s2):]
        ans += 1
    print(ans)
    testCase -= 1
