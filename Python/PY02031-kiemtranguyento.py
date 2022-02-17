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


n, m = [int(x) for x in input().split()]
arr = []
for i in range(n):
    arr.append([])
    x = [int(x) for x in input().split()]
    for j in range(len(x)):
        arr[i].append(x[j])

for i in range(n):
    for j in range(m):
        if is_prime(arr[i][j]) == True:
            print(1, end=" ")
        else:
            print(0, end=" ")
    print()
