s = input()
arr = s.split(' ')
a = int(arr[0])
k = int(arr[1])
n = int(arr[2])
check = 0
if a >= n: 
    print(-1)
else: 
    if a < k:
        b = k - a  
    elif a == k:
        b = a + k  
    else: 
        b = k *(int(a / k) + 1) - a 
    if a + b > n: 
        print(-1)
    else: 
        for i in range(b,n-a+1,k): 
            print(i, end = ' ')