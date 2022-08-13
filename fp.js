function increment(n) {
    return n + 1
}

function my_objective(arr, f) {
    for (let i = 0; i < arr.length; ++i)
        arr[i] = f(arr[i])
}

function main() {
    let arr = [0, 1, 2, 3 ,4]
    my_objective(arr, increment)
    console.log(arr)
}
main()
