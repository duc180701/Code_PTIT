testCase = int(input())
while testCase > 0:
    s = str(input())
    if s[0] == s[len(s) - 1]:
        print("YES")
    else:
        print("NO")
    testCase -= 1