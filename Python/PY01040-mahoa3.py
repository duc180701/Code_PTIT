def Rotate(x, num_rotate):
    return (x + num_rotate) % 26


def solve():
    L = []
    for i in input():
        a = ord(i) - ord('A')
        L.append(a)
    a = int(len(L)/2)
    L1 = L[:a]
    L2 = L[a:]

    a = sum(L1)
    for i in range(len(L1)):
        L1[i] = Rotate(L1[i], a)

    a = sum(L2)
    for i in range(len(L2)):
        L2[i] = Rotate(L2[i], a)

    for i in range(len(L1)):
        L1[i] = Rotate(L1[i], L2[i])
        print(chr(ord('A') + L1[i]), end='')
    print()


T = int(input())
for i in range(T):
    solve()
