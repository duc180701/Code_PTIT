def fibo(n):
    f1 = 1
    f2 = 1
    fn = f1 + f2
    if n == 1 or n == 2:
        return 1
    elif n == 3:
        return 2
    for i in range(n - 3):
        f1 = f2
        f2 = fn
        fn = f1 + f2
    return fn


testCase = int(input())
while testCase > 0:
    n = [int(x) for x in input().split()]
    for i in range(n[0], n[1] + 1):
        print(fibo(i), end=" ")
    print()
    testCase -= 1
