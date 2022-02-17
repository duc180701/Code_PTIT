while True:
    s = str(input())
    if s == "0":
        break
    n = int(s)
    ans = 0
    while n != 1:
        if n % 2 == 0:
            n //= 2
            ans += 1
        else:
            n = n * 3 + 1
            ans += 1
    print(ans + 1)
