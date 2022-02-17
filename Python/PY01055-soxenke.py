def leng_is_oddNum(s):
    if len(s) % 2 != 0:
        return True
    return False

def first_dif_second(s):
    if s[0] != s[1]:
        return True
    return False

def check_in_odd_position(s):
    for i in range(2, len(s), 2):
        if s[i] !=  s[i - 2]:
            return False
    if len(s) % 2 == 0:
        if s[len(s) - 1] == s[len(s) - 3]:
            return True
        else:
            return False
    return True

testCase = int(input())
while testCase > 0:
    no = 1
    s = str(input())
    if first_dif_second(s) == True:
        if leng_is_oddNum(s) == True:
            if check_in_odd_position(s) == True:
                print("YES")
                no = 0
    if no == 1:
        print("NO")
    testCase -= 1