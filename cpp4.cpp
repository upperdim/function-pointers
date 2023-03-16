#include <iostream>
#include <vector>

struct increment{

    int operator()(int n) const{
        return n + 1;
    }
};


void my_objective(std::vector<int>& vec, const increment& f) {
    for (int i = 0; i < vec.size(); ++i)
        vec[i] = f(vec[i]);
}

void print(const std::vector<int>& vec){
    for(const int n : vec)
        std::cout << n << "\n";
    std::cout << std::endl;
}


int main() {
    std::vector<int> vec = {0, 1, 2, 3, 4};
    const increment functor;

    my_objective(vec, functor);

    print(vec);

    std::cin.get();
    
}
