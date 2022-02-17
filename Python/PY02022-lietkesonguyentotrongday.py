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


n = int(input())
x = [int(x) for x in input().split()]
arrCount = []
used = []
for i in range(max(x) + 1):
    arrCount.append(0)
    used.append(0)
for i in range(n):
    arrCount[x[i]] += 1
for i in range(n):
    if is_prime(x[i]) == True and used[x[i]] == 0:
        used[x[i]] += 1
        print(x[i], arrCount[x[i]])
