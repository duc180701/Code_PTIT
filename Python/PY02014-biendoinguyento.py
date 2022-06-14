def prime(n):
    pri = [True for i in range(2*n+1)]
    p = 2
    while p*p <= 2*n:
        if pri[p] == True:
            i = p*p
            while i <= n*2:
                pri[i] = False
                i += p
        p += 1
    primes = []
    for k in range(2, (2 * n) + 1):
        if (pri[k]):
            primes.append(k)
    return primes


def minchange(a):
    res = []
    m = max(a)
    primes = prime(m)
    for i in range(len(a)):
        x = -1
        for j in range(len(primes)):
            if a[i] == primes[j]:
                x = j
                break
            elif a[i] < primes[j]:
                x = j
                break
        minans = abs(a[i] - primes[x])
        if (x > 1):
            minans = min(minans, abs(primes[x - 1] - a[i]))
        res.append(minans)
    return max(res)


val = int(input())
l = [int(i) for i in input().split()]
print(minchange(l))
