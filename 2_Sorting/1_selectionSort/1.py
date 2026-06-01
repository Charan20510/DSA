def selectionSort(arr):
    n = len(arr)
    
    for i in range(n - 1):
        min = i

        for j in range(i + 1, n):
            if arr[j] < arr[min]:
                min = j
        
        arr[i], arr[min] = arr[min], arr[i]

    return arr

arr = [64, 25, 12, 22, 11]
print("Unsorted Array: ", arr)

sorted = selectionSort(arr=arr)
print("Sorted Array: ", sorted)
