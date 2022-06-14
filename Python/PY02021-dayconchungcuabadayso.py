n = int(input())
while n > 0:
    val = [int(i) for i in input().split()]
    list1 = [int(i) for i in input().split()]
    list2 = [int(i) for i in input().split()]
    list3 = [int(i) for i in input().split()]

    i = j = k = s = 0
    while i < len(list1) and j < len(list2) and k < len(list3):
        if(list1[i] == list2[j] and list2[j] == list3[k]):
            print(list2[j], end=" ")
            s += 1
            i += 1
            j += 1
            k += 1
        elif list1[i] < list2[j]:
            i += 1
        elif list2[j] < list3[k]:
            j += 1
        else:
            k += 1
    if s == 0:
        print("NO", end="")
    print()
    n -= 1
