#include <iostream>

int main(){
    std::cout << "Input n" << std::endl;
    int n {0};
    std::cin >> n;
    for (int k = 1; k <= n; k++ ){
        for (int t = 0; t < k; ++t){
            std::cout << '&';
        }
        std::cout << std::endl;
    }

    return 0;
}