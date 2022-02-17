testCase = int(input())
while testCase > 0:
    s = str(input())
    if s[-2:] == "86":
        print("YES")
    else:
        print("NO")
    testCase -= 1