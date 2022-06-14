n = [int(i) for i in input().split()]
set1 = {int(i) for i in input().split()}
set2 = {int(i) for i in input().split()}
set3 = set1.intersection(set2)
set4 = set1.difference(set2)
set5 = set2.difference(set1)
res1 = list(set3)
res1.sort()
res2 = list(set4)
res2.sort()
res3 = list(set5)
res3.sort()

for i in res1:
    print(i, end=" ")
print()
for i in res2:
    print(i, end=" ")
print()
for i in res3:
    print(i, end=" ")
