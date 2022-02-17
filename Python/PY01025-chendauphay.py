from typing import AnyStr


n = int(input())
s = str(n)
dau = len(s) % 3
duoi = len(s) // 3
ans = []
if dau != 0:
    ans.append(s[0:dau])
j = dau
for i in range(duoi):
    ans.append(s[j:j + 3])
    j += 3
print(",".join(ans))