arr = []
n = int(input())
for i in range(n):
    arr.append([])
    x = [int(x) for x in input().split()]
    for j in range(len(x)):
        arr[i].append(x[j])
k = int(input())
sumUp = 0
sumDown = 0
drop = 1
for i in range(n):
    for j in range(n - drop):
        sumUp += arr[i][j]
    drop += 1
drop = n
sumColumn = 0
for i in range(n):
    for j in range(n):
        sumColumn += arr[i][j]
    for j in range(drop):
        sumColumn -= arr[i][j]
    sumDown += sumColumn
    sumColumn = 0
    drop -= 1
sumAll = abs(sumUp - sumDown)
if sumAll <= k:
    print("YES")
else:
    print("NO")
print(sumAll)
