def mul_str(s):
    mul = 1
    for i in s:
        mul *= int(i)
    return mul


testCase = int(input())
while testCase > 0:
    n = int(input())
    x = [int(x) for x in input().split()]
    arrCount = []
    for i in range(n):
        arrCount.append(mul_str(str(x[i])))
    for i in range(n - 1):
        for j in range(i + 1, n):
            if arrCount[i] > arrCount[j]:
                tmp = x[i]
                x[i] = x[j]
                x[j] = tmp
                tmp1 = arrCount[i]
                arrCount[i] = arrCount[j]
                arrCount[j] = tmp1
            elif arrCount[i] == arrCount[j] and x[i] > x[j]:
                tmp = x[i]
                x[i] = x[j]
                x[j] = tmp
    for i in range(n):
        print(x[i], end=" ")
    print()
    testCase -= 1
