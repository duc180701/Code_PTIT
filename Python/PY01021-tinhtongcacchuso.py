x = int(input())
while x > 0:
    y = input()
    tong = 0
    list = []
    for i in range(0, len(y)):
        if y[i].isdigit():
            tong += int(y[i:i+1])
            list.append(i)
    res = []
    for i in range(0, len(y)):
        if i in list:
            continue
        else:
            res.append(y[i])
    res.sort()
    res.append(tong)
    for i in res:
        print(i, end="")
    print()
    x -= 1
