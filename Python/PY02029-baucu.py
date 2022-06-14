num = input()
val = [int(i) for i in input().split()]
val.sort()
c = []
for i in val:
    c.append(val.count(i))
ma = max(c)
second = 0
c.sort()
for i in c:
    if i != ma:
        second = i

for i in val:
    if val.count(i) == second:
        print(i)
        break
if second == 0:
    print("NONE")
