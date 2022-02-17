testCase = int(input())
n = [int(x) for x in input().split()]
ans = 0
for i in range(len(n) - 1):
    if n[i] != n[i + 1]:
        ans += 1
print(ans)
