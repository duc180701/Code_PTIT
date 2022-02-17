def check_arr(n):
    n1 = [int(x) for x in input().split()]
    n2 = [int(x) for x in input().split()]
    n1.sort()
    n2.sort()
    for i in range(n):
        if n1[i] > n2[i]:
            return False
    return True


testCase = int(input())
while testCase > 0:
    n = int(input())
    if check_arr(n) == True:
        print("YES")
    else:
        print("NO")
    testCase -= 1
