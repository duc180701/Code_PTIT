import math


def is_prime(n):
    if n < 2:
        return False
    elif n == 2 or n == 3:
        return True
    else:
        for i in range(2, int(math.sqrt(n)) + 1):
            if n % i == 0:
                return False
        return True


arrPrime = []
ans = []
j = 2
n = [int(x) for x in input().split()]
for i in range(n[0]):
    while True:
        if is_prime(j):
            arrPrime.append(j)
            j += 1
            break
        else:
            j += 1
ans.append(n[1])
tmp = 0
for i in range(n[0]):
    ans.append(ans[tmp] + arrPrime[i])
    tmp += 1
for i in range(len(ans)):
    print(ans[i], end=" ")
