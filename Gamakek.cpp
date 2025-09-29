#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	float x, y;
	cin >> x >> y;

	float R = (-x + pow((pow(x, 2) - 4 * x * y), 1/2)) / (2 * x);
	float S = (pow(4, -3 * x)) * sin(y);
	cout << R << " " << S << "\n";

	float C = max(R, S);
	cout << C;
	
	cin.get();
	return 0;
}