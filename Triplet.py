def triplet(arr, target):
    arr.sort()
    for i in range(len(arr) - 2):
        left = i + 1
        right = len(arr) - 1

        while left <= right:
            current_target = arr[i] + arr[left] + arr[right]
            if current_target == target:
                print("Found Match With Values :", arr[i], arr[left], arr[right])
                return arr[i], arr[left], arr[right]

            elif current_target < target:
                left = left + 1
            else:
                right = right - 1
    return "doesnt exist"


arr = [2, 4, 3, 3, 5, 10, 11]
target = 26
print(triplet(arr, target))
