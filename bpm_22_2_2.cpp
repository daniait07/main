#include <iostream>

int factorial(int x) {
    if (x == 0) return 1;
    else {
    int sum = 1;
    for (int i = 1; i <= x; i++) {
        sum *= (2 * i - 1);
    }
    return sum;
  }
}

int main() {
    double x,y;
    int k1 = 0, k2 = 0;
    while (std::cin >> x >> y){
    if (y >= x && y >= -x && y <= 2-x*x) k1++;
    else k2++;
    std::cout << "In zone: " << k1 << "\n";
    std::cout << "Out zone: " << k2 << "\n";
    std::cout << "Percent: " << (k1 / k2) * 100 << "\n";
    }
    system("pause");
}
