def bubbleSort(arr):
    n = len(arr)
    
    for i in range(n - 1):
        swaped = False

        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swaped = True

        if not swaped:
            break

arr = [64, 34, 25, 12, 22, 11, 90]
print("Unsorted Array: ", arr)

bubbleSort(arr=arr)
print("Sorted Array: ", arr)
