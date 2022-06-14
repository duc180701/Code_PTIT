import math


def check(val):
    if val == val[::-1]:
        return 1
    return 0


n = [int(i) for i in input().split()]
matran = []
minmax = []
for i in range(0, n[0]):
    res = [int(k) for k in input().split()]
    matran.append(res)
    for j in res:
        if check(str(j)) == 1 and len(str(j)) >= 2:
            minmax.append(j)
c = 0
hieu = 0
if len(minmax) >= 1:
    c = 1
    hieu = max(minmax)

if c == 0:
    print("NOT FOUND")
else:
    print(hieu)
    for i in range(0, n[0]):
        for j in range(0, n[1]):
            if matran[i][j] == hieu:
                print("Vi tri ["+str(i)+"]["+str(j)+"]")
