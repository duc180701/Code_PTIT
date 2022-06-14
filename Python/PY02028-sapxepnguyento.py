import math


def check(n):
    if n < 2:
        return 0
    for i in range(2, int(math.sqrt(n))+1):
        if n % i == 0:
            return 0
    return 1


val = int(input())
num = [int(i) for i in input().split()]
ind = []
ngto = []
for i in range(0, len(num)):
    if check(num[i]) == 1:
        ngto.append(num[i])
        ind.append(i)
ngto.sort()
j = 0
for i in range(0, len(num)):
    if i == ind[j]:
        num[i] = ngto[j]
        if j < len(ind)-1:
            j += 1

for i in num:
    print(i, end=" ")
