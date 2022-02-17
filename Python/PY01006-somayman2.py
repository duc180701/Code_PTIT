testCase = int(input())
while testCase > 0:
    stop = False
    s = str(input())
    for i in s:
        if i != "4" and i != "7":
            stop = True
            break
    if stop:
        print("NO")
    else:
        print("YES")
    testCase -= 1