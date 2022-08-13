#include <stdio.h>

#define ARRSIZ 5

int increment(int n) {
    return n + 1;
}

void my_objective(int *arr, const int SIZE, int (*f)(int)) {
    for (int i = 0; i < SIZE; ++i)
        arr[i] = f(arr[i]);
}

int main() {
    int arr[ARRSIZ] = {0, 1, 2, 3, 4};
    my_objective(arr, ARRSIZ, increment);

    for (int i = 0; i < ARRSIZ; ++i)
        printf("%d ", arr[i]);
    putchar('\0');
}
