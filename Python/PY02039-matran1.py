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
for i in range(n):
    for j in range(n):
        if j > i:
            sumUp += arr[i][j]
        if j < i:
            sumDown += arr[i][j]
sumAll = abs(sumUp - sumDown)
if sumAll <= k:
    print("YES")
else:
    print("NO")
print(sumAll)
