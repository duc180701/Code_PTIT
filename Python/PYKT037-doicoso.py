def convert_number(n, b):
    if (n < 0 or b < 2 or b > 36):
        return ""

    sb = ""
    m = 0
    remainder = n

    while (remainder > 0):
        if (b > 10):
            m = remainder % b
            if (m >= 10):
                sb = sb + str(chr(55 + m))
            else:
                sb = sb + str(m)
        else:
            sb = sb + str(remainder % b)
        remainder = int(remainder / b)
    return "".join(reversed(sb))


t = int(input())
while t > 0:
    vao = input()
    tmp = vao.split()
    n = int(tmp[0])
    k = int(tmp[1])
    print(convert_number(n, k))
    t -= 1
