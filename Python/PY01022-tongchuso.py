def tongCS(n):
    m = str(n)
    tong = 0
    if m[0] == '-':
        tong += ord('-') - ord('0')
        for i in range(1, len(m)):
            tong += int(m[i])
    else:
        for i in range(len(m)):
            tong += int(m[i])
    return tong


m = input()
n = int(m)
dem = 1
while tongCS(n) >= 10:
    dem += 1
    n = tongCS(n)
print(dem)
