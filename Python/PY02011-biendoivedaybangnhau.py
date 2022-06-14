n = int(input())
arr = [int(i) for i in input().split()]
min_sum = 10000000000
min_value = arr[0]
count = 0
for i in range(n):
    sum_tmp = 0
    for j in range(n):
        if arr[j] != arr[i]:
            sum_tmp += abs(arr[j] - arr[i])
    if sum_tmp < min_sum:
        min_sum = sum_tmp
        min_value = arr[i]

print(min_sum, min_value)
