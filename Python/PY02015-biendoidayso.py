def check(arr):
    for i in range(3):
        if arr[i] != arr[i + 1]:
            return False
    return True


def stop(arr):
    for i in range(3):
        if arr[i] != 0:
            return False
    return True


while True:
    arr = []
    a, b, c, d = map(int, input().split())
    arr.append(a)
    arr.append(b)
    arr.append(c)
    arr.append(d)
    if stop(arr) == True:
        break
    ans = 0
    while check(arr) == False:
        first = arr[0]
        arr[0] = abs(arr[0] - arr[1])
        arr[1] = abs(arr[1] - arr[2])
        arr[2] = abs(arr[2] - arr[3])
        arr[3] = abs(arr[3] - first)
        ans += 1
    print(ans)
