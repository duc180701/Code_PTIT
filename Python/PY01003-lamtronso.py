import math

testCase = int(input())

while testCase > 0:
    n = int(input())
    if n <= 10:
        print(n)
    else:
        count = 0
        while n > 9: 
            m = n % 10  
            n /= 10         
            if m < 5:
                n = math.floor(n)
            else:
                n = math.ceil(n)
            count += 1
        print(n*pow(10, count))
    testCase -= 1