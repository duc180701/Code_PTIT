def solve():
    k = int(input())

    x = int(input(), 2)

    s = ''
    while x != 0:
        a = x % k

        if a < 10:
            a = str(a)
        else:
            a = chr(a - 10 + ord('A'))
        s += a
        x //= k
    print(s[::-1])


T = int(input())
while T > 0:
    T -= 1
    solve()
