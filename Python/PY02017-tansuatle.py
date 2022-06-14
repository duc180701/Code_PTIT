x = int(input())
while x > 0:
    num = int(input())
    t = [int(i) for i in input().split()]
    t.sort()
    t.reverse()
    curr = 1
    ma = 1
    res = t[0]
    for i in range(1, len(t)):
        if(t[i-1] == t[i]):
            curr += 1
        else:
            if curr % 2 == 1:
                res = t[i-1]
            curr = 1
    if curr % 2 == 1:
        res = t[len(t)-1]
    print(res)
    x -= 1
