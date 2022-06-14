n = int(input())
matran = []
t1 = t2 = 0
while n > 0:
    val = [int(i) for i in input().split()]
    matran.append(val)
    n -= 1
for i in range(0, len(matran)):
    t1 += matran[0][i]
    t2 += matran[1][i]
le = len(matran)
if le == 2:
    print(str(1)+" "+str(matran[0][1] - 1))
else:
    res = []
    x0 = int((int((t1 - t2) / (le - 2)) + matran[0][1]) / 2)
    res.append(x0)
    k = 1
    while k < le:
        res.append(matran[k-1][k] - res[k-1])
        k += 1
    for i in res:
        print(i, end=" ")
