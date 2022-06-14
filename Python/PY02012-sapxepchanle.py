n = int(input())
odd = []
even = []
x = []
while len(x) < n:
    val = [int(i) for i in input().split()]
    for i in val:
        x.append(i)
for i in range(len(x)):
    if x[i] % 2 == 0:
        even.append(x[i])
    else:
        odd.append(x[i])
even.sort()
odd.sort(reverse=True)
cntEven = 0
cntOdd = 0
res = []
for i in range(len(x)):
    res.append(0)
for i in range(len(res)):
    if x[i] % 2 == 0:
        res[i] = even[cntEven]
        cntEven += 1
    else:
        res[i] = odd[cntOdd]
        cntOdd += 1
for i in range(len(res)):
    print(res[i], end=" ")
