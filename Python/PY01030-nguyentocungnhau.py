import math

n = [int(x) for x in input().split()]

endwith = 10**n[1]
startwith = endwith // 10
ans = []
for i in range(startwith, endwith):
    if math.gcd(i, n[0]) == 1:
        ans.append(i)
cnt = 0
for i in ans:
    cnt += 1
    print(i,end = " ")
    if cnt == 10:
        cnt = 0
        print()
