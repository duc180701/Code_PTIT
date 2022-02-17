testCase = int(input())
while testCase > 0:
    arrRandom = []
    arrCount = []
    n = int(input())
    for i in range(n):
        arrRandom.append(int(input()))
    for i in range(1001):
        arrCount.append(0)
    for i in range(len(arrRandom)):
        arrCount[arrRandom[i]] += 1
    max = 0
    ind = 0
    for i in range(len(arrCount)):
        if arrCount[i] > max:
            max = arrCount[i]
            ind = i
    print(ind)
    testCase -= 1
