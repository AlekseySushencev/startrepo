#include <iostream>

int main() {
    std::cout << "Input n" << std::endl;
    int n {0};
    std::cin >> n;
    for (int k = n; k >= 1; k-- ){
        for (int t = 0; t < n - k; ++t){
            std::cout << ' ';
        }
        for (int t = 0; t < k; ++t){
            std::cout << '&';
        }
        std::cout << std::endl;
    }

    return 0;
}