testCase = int(input())

while testCase > 0:
    s = str(input())
    if s[0] == s[-2] and s[1] == s[-1]:
        print("YES")
    else:
        print("NO")
    testCase -= 1