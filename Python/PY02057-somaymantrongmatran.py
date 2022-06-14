n = [int(i) for i in input().split()]
matran = []
minmax = []
for i in range(0, n[0]):
    res = [int(i) for i in input().split()]
    minmax.append(min(res))
    minmax.append(max(res))
    matran.append(res)
hieu = max(minmax) - min(minmax)

c = 0

for i in matran:
    if hieu in i:
        c += 1

if c == 0:
    print("NOT FOUND")

else:
    print(hieu)
    for i in range(0, n[0]):
        for j in range(0, n[1]):
            if matran[i][j] == hieu:
                print("Vi tri ["+str(i)+"]["+str(j)+"]")
