def increment(n):
    return n + 1


def my_objective(arr, f):
    for i in range(len(arr)):
        arr[i] = f(arr[i])


if __name__ == '__main__':
    arr = [0, 1, 2 , 3, 4]
    my_objective(arr, increment)
    print(arr)
