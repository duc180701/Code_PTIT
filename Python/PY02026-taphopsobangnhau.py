val = [int(i) for i in input().split()]
set1 = {int(i) for i in input().split()}
set2 = {int(i) for i in input().split()}
set3 = set1.difference(set2)
if len(set3) == 0:
    print("YES")
else:
    print("NO")
