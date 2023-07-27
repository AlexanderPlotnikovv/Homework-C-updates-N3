#include <iostream>
#include <cmath>
#include <vector>
#include <functional>

int main()
{
	const double PI = 3.141592653589793;
	std::vector<double> angles = {PI/6,PI/3,PI/2};
	auto Cos = [](double x) { std::cout << "cos: " << cos(x) << " "; };
	auto Sin = [](double x) { std::cout << "sin: " << sin(x) << " "; };
	auto Tg = [](double x) { std::cout << "tan: " << tan(x) << " "; };
	std::vector<std::function<void(double)>> functions = {Sin,Cos};
	for (const auto& angle : angles) {
		std::cout << angle << ": ";
		for (const auto& function : functions)
			function(angle);
		std::cout << std::endl;
	}
}