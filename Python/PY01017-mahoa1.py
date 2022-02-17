testCase = int(input())
while testCase > 0:
    s = str(input())
    s += " "
    ans = ""
    i = 1
    pre = s[0]
    cnt = 1
    while i < len(s):
        if s[i] == pre:
            cnt += 1
        else:
            ans += str(cnt) + pre
            pre = s[i]
            cnt = 1
        i += 1
    print(ans)
    testCase -= 1