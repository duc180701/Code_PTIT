def is_revNum(n):
    x = n
    check = 0
    while x > 0:
        check = check * 10 + x % 10
        x //= 10
    if check == n:
        return True
    return False

testCase = int(input())
while testCase > 0:
    s = str(input())
    sum = 0
    for i in s:
        sum += int(i)
    if is_revNum(sum) == True and len(str(sum)) > 1:
        print("YES")
    else:
        print("NO")
    testCase -= 1