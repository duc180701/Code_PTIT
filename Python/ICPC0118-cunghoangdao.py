testCase = int(input())
while testCase > 0:
    x = [int(x) for x in input().split()]
    countDay = x[0] + (x[1] - 1) * 30
    if countDay >= (21 + 2 * 30) and countDay <= (19 + 3 * 30):
        print("Bach Duong")
    elif countDay >= (20 + 3 * 30) and countDay <= (20 + 4 * 30):
        print("Kim Nguu")
    elif countDay >= (21 + 4 * 30) and countDay <= (20 + 5 * 30):
        print("Song Tu")
    elif countDay >= (21 + 5 * 30) and countDay <= (22 + 6 * 30):
        print("Cu Giai")
    elif countDay >= (23 + 6 * 30) and countDay <= (22 + 7 * 30):
        print("Su Tu")
    elif countDay >= (23 + 7 * 30) and countDay <= (22 + 8 * 30):
        print("Xu Nu")
    elif countDay >= (23 + 8 * 30) and countDay <= (22 + 9 * 30):
        print("Thien Binh")
    elif countDay >= (23 + 9 * 30) and countDay <= (22 + 10 * 30):
        print("Thien Yet")
    elif countDay >= (23 + 10 * 30) and countDay <= (21 + 11 * 30):
        print("Nhan Ma")
    elif countDay >= (20 + 0 * 30) and countDay <= (18 + 1 * 30):
        print("Bao Binh")
    elif countDay >= (19 + 1 * 30) and countDay <= (20 + 2 * 30):
        print("Song Ngu")
    elif countDay >= (22 + 11 * 30) or countDay <= (19 + 0 * 30):
        print("Ma Ket")
    testCase -= 1
