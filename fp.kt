fun increment(n: Int): Int {
    return n + 1
}

fun myObjective(arr: IntArray, f: (input: Int) -> Int) {
    for (i in 0 until arr.size)
    	arr[i] = f(arr[i])
}

fun main() {
    var arr: IntArray = intArrayOf(0, 1, 2, 3, 4)
    myObjective(arr, ::increment)
    
    for (i in 0 until arr.size)
    	print("${arr[i]} ")
}
