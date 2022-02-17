from posixpath import split
import string

while True:
    val = input()
    if val == "0":
        break
    inp = val.split()
    k = int(inp[0])
    s = inp[1]
    alphabet = list(string.ascii_uppercase)
    alphabet.append("_")
    alphabet.append(".")
    ans = ""
    for i in range(len(s)):
        indexOfi = alphabet.index(s[i])
        ans += alphabet[(indexOfi + k) % 28]
    print(ans[::-1])
