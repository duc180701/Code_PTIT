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
num = list(dict.fromkeys(num))
res = []
res.append(num[0])
for i in range(1, len(num)):
    res.append(res[i-1]+num[i])
c = 0
for i in range(len(res)):
    if check(res[i]) == 1 and check(res[len(res) - 1] - res[i]) == 1:
        print(i)
        c = 1
        break
if c == 0:
    print("NOT FOUND")
