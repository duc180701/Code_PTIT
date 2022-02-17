testCase = int(input())
while testCase > 0:
    s = str(input())
    sum = 0
    for i in s:
        sum += int(i)
    if sum % 3 == 0:
        print("YES")
    else:
        print("NO")
    testCase -= 1