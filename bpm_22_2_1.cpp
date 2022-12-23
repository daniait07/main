#include <iostream>
#include <math.h>

int main() {
    double eps = 0.0001;
    double step = 0.05;
    double sum = 0;
    for (double x = 0.1; x <= 1 + step; x += step)
    {
        int i = -1;
        double res = 0;
        double s = 0;
        do
        {
            i++;
            res = (pow(x, 2 * i + 1)) / (2 * i + 1);
            s += res;
            sum += res;
        }
        while (res >= eps);
        std::cout << "x: " << x << "; sum (x): " << s 
        << "; sum: " << sum << "; i: " << i << std::endl;
    }
    system("pause");
}
