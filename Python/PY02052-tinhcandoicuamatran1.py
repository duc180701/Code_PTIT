num = int(input())
matran = []
sum = 0
nuatren = 0
cheochinh = 0
while num > 0:
    row = [int(i) for i in input().split()]
    matran.append(row)
    num -= 1
balance = int(input())
for i in range(0, len(matran)):
    for j in range(0, len(matran[i])):
        sum += matran[i][j]
        if j > i:
            nuatren += matran[i][j]
        if j == i:
            cheochinh += matran[i][j]
nuaduoi = sum - cheochinh - nuatren
if abs(nuaduoi - nuatren) <= balance:
    print("YES")
else:
    print("NO")
print(abs(nuaduoi - nuatren))
