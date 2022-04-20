testCase = int(input())
while testCase > 0:
    n = int(input())
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    a.sort()
    b.sort()
    yes = 1
    for i in range(n):
        if a[i] > b[i]:
            print("NO")
            yes = 0
            break
    if yes == 1:
        print("YES")
    testCase -= 1
