#include <iostream>
#include <vector>

constexpr size_t ARRSIZ = 5;

int increment(int n) {
    return n + 1;
}

void print(const std::vector<int>& arr){
    for(const int n : arr)
        std::cout << n << "\n";
    std::cout << std::endl;
}


void my_objective(std::vector<int>& arr, int (*f)(int)) {
    for (int i = 0; i < arr.size(); ++i)
        arr[i] = f(arr[i]);
}

int main() {
    std::vector<int> arr = {0, 1, 2, 3, 4};

    my_objective(arr, [](int n){ return n + 1;});

    print(arr);

    std::cin.get();
    
}
