t = int(input())
while t > 0:
    s = input()
    if len(s) == 1:
        print('-11')
    else:
        s = list(s)
        for j in range(len(s)-1, 0, -1):
            if s[j] < s[j-1]:
                s1 = s[j-1:len(s)]
                s1.sort(reverse=True)
                for k in range(len(s1)):
                    if s1[k] < s[j-1]:
                        for l in range(j-1, len(s)):
                            if s[l] == s1[k]:
                                s[l], s[j-1] = s[j-1], s[l]
                                break
                        break
                if s[0] == '0':
                    print('-1')
                    break
                else:
                    print(''.join(s))
                    break
            elif j == 1:
                print("-1")
    t -= 1
