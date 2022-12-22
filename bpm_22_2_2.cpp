#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
#include <fstream>
#define _USE_MATH_DEFINES

int factorial(int x) {
	if (x == 0) {
		return 1;
	}
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
	while (std:: cin >> x >> y){
		if (y >= x && y >= -x && y <= 2-x*x) {
			k1++;
		else if (y <= x && y <= -x && y >= 2-x*x) {
			k2++;
		}
	}
		std::cout << "IN ZONE" << k1 << "\n";
		std::cout << "Out Zone" << k2 << "\n";
		std::cout << "pr" << k2 / k1 << "\n";

