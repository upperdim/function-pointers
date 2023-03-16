#include <iostream>

constexpr size_t ARRSIZ = 5;

int increment(int n) {
    return n + 1;
}

template<size_t N>
void print(const int (&arr)[N]){

    for (int i = 0; i < N; ++i)
        std::cout << arr[i] << "\n";
    std::cout << std::endl;
}

void my_objective(int* arr, const size_t N, int (*f)(int)) {
    for (int i = 0; i < N; ++i)
        arr[i] = f(arr[i]);
}

int main() {

    int arr[ARRSIZ] = {0, 1, 2, 3, 4};
    my_objective(arr, ARRSIZ, increment);

    print(arr);

    std::cin.get();
    
}
