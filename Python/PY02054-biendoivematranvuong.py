n = [int(i) for i in input().split()]
matran = []
for i in range(0, n[0]):
    res = [int(k) for k in input().split()]
    matran.append(res)
if n[0] > n[1]:
    i = 0
    while len(matran) - matran.count(-1) > n[1]:
        matran[i] = -1
        i += 2
    res = []
    for i in matran:
        if i != -1:
            for j in i:
                print(j, end=" ")
            print()

elif n[1] > n[0]:
    loai = 1
    k = 0
    while n[1] > n[0]+k:
        for i in range(0, len(matran)):
            for j in range(0, len(matran[i])):
                if j == loai:
                    matran[i][j] = -1
        k += 1
        loai += 2
    for i in range(0, len(matran)):
        for j in range(0, len(matran[i])):
            if matran[i][j] != -1:
                print(matran[i][j], end=" ")
        print()

else:
    for i in matran:
        for j in i:
            print(j, end=" ")
        print()
