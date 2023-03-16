#include <iostream>
#include <vector>
#include <functional>

void print(const std::vector<int>& vec){
    for(const int n : arr)
        std::cout << n << "\n";
    std::cout << std::endl;
}

void my_objective(std::vector<int>& vec, const std::function<int(int)>& f) {
    for (int i = 0; i < vec.size(); ++i)
        vec[i] = f(vec[i]);
}

int main() {
    std::vector<int> vec = {0, 1, 2, 3, 4};

    my_objective(vec, [&](int n){ return n + 1;});

    print(vec);

    std::cin.get();
    
}
