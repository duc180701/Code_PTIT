n = int(input())
x = [int(x) for x in input().split()]
x.sort()
k = max(x)
tmp = 1
for i in range(1, k + 1):
    if i not in x:
        tmp = 0
        print(i)
        break
if tmp == 1:
    print(k + 1)
