def two_sum(arr, target):
    arr.sort()
    for i in range(len(arr) - 2):
        i = i + 1
        right = len(arr) - 1

        while i <= right:
            current_target = arr[i] + arr[right]
            if current_target == target:
                print("Found Match With Values :", arr[i], arr[right])
                return arr[i], arr[right]

            elif current_target < target:
                i = i + 1
            else:
                right = right - 1
    return "doesnt exist"


arr = [2, 4, 3, 3, 5, 10, 11]
target = 8
print(two_sum(arr, target))
