testCase = int(input())
n = [int(x) for x in input().split()]
ans = 0
for i in range(len(n) - 1):
    for j in range(i + 1, len(n)):
        if i < j and n[i] > n[j]:
            ans += 1
print(ans)
