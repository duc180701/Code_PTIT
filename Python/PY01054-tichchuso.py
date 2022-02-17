testCase = int(input())
while testCase > 0:
    s = str(input())
    sum = 1
    for i in s:
        if i != "0":
            sum *= int(i)
    print(sum)
    testCase -= 1