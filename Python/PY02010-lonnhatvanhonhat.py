ok = True
while ok == True:
    n = int(input())
    if n == 0:
        ok = False
    else:
        a = [int(i) for i in range(n)]
        i = 0
        TG = 0

        while i < n:
            tmp = input()
            a[i] = int(tmp)
            i += 1
        for i in range(1, n):
            if a[i] != a[0]:
                TG = 1
                break
        if TG == 1:
            b = sorted(a)
            print(b[0], b[n - 1])
        else:
            print("BANG NHAU")
