s = str(input())
ans = []
for i in s:
    if i <= "9" and i >= "0":
        ans.append(int(i))
if (ans[0] + ans[1]) == ans[2]:
    print("YES")
else:
    print("NO")