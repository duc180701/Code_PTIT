n = int(input())
x = [float(x) for x in input().split()]
x.sort()
countMin = 0
countMax = 0
minX = x[0]
maxX = x[n - 1]
for i in range(n):
    if x[i] == minX:
        countMin += 1
    if x[i] == maxX:
        countMax += 1
cnt = 0
sum = 0.0
for i in range(countMin, n - countMax):
    cnt += 1
    sum += x[i]
print(round(sum / cnt, 2))
