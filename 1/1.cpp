#include <iostream>
using namespace std;

int main()
{
	int a;
	setlocale(0,"");
	cout << "¬ведите число: ";
	cin >> a;
	int b = 1;
	while (a > 0)
	{
		b <<= 1;
		a >>= 1;
	}
	b >>= 1;
	cout << "Ѕлижайшее снизу число степени 2: " << b;
	cout << endl;
	system("pause");
}