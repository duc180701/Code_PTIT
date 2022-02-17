def sum_odd_posi(s):
    sum = 0
    for i in range(1, len(s), 2):
        sum += int(s[i])
    return sum

def all_even_posi_is_0(s):
    for i in range(0, len(s), 2):
        if s[i] != "0":
            return False
    return True

def mul_even_posi(s):
    mul = 0
    if all_even_posi_is_0(s) == True:
        return mul
    else:
        mul = 1
        for i in range(0, len(s), 2):
            if s[i] != "0":
                mul *= int(s[i])
        return mul
        

testCase = int(input())
while testCase > 0:
    s = str(input())
    print(mul_even_posi(s), sum_odd_posi(s))
    testCase -= 1