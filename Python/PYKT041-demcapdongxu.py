def giai_thua(n):
    if n == 0:
        return 1
    return giai_thua(n - 1) * n


def combi(n):
    res = (giai_thua(n)) / (giai_thua(2) * giai_thua(n - 2))
    return res


def count_C_in_row(a, n, i):
    cnt = 0
    for j in range(n):
        if a[i][j] == "C":
            cnt += 1
    return cnt


def count_C_in_column(a, n, i):
    cnt = 0
    for j in range(n):
        if a[j][i] == "C":
            cnt += 1
    return cnt


n = int(input())
a = []
for i in range(n):
    a.append([])
    s = str(input())
    for j in range(n):
        a[i].append(s[j])
ans = 0
i = 0
while i < n:
    cntColumn = count_C_in_column(a, n, i)
    cntRow = count_C_in_row(a, n, i)
    if cntColumn >= 2:
        ans += combi(cntColumn)
    if cntRow >= 2:
        ans += combi(cntRow)
    i += 1
print(int(ans))
