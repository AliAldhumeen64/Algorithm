def BinarySearch(TheArray, val):
    first = 0
    last = len(TheArray) - 1
    index = -1

    while(first <= last) and (index == -1):
        mid = (first + last) // 2
        if TheArray[mid] == val:
            index = mid
        else:
            if val < TheArray[mid]:
                last = mid - 1
            else:
                first = mid + 1
    return index

print(BinarySearch([10,20,30,40,50,60,70,80,90,100], 50))