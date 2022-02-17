s = str(input())
count_4 = 0
count_7 = 0
for i in s:
    if i == "4":
        count_4 += 1
    if i == "7":
        count_7 += 1
if (count_4 + count_7 == 4) or (count_4 + count_7 == 7):
    print("YES")
else:
    print("NO")