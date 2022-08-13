package main

import "fmt"

func increment(n int) int {
    return n + 1
}

func myObjective(arr *[5]int, f func(int)int) {
    for i := 0; i < len(arr); i++ {
        arr[i] = f(arr[i])
    }
}

func main() {
    arr := [5]int {0, 1, 2, 3, 4}
    myObjective(&arr, increment)
    
    for i := 0; i < len(arr); i++ {
        fmt.Print(arr[i], " ")
    }
}
