
num = int(input())
val = []
while num > 0:
    l = input()
    val.append(l)
    num -= 1
c = 0
for i in range(0, len(val)):
    for j in range(0, len(val[i])):
        if val[i][j] == "C":
            for k in range(j+1, len(val[i])):
                if val[i][k] == "C":
                    c += 1
            for p in range(i+1, len(val)):
                if val[p][j] == "C":
                    c += 1
print(c)
