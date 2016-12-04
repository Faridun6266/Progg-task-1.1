#include <iostream>; 


using namespace std;
int main(void)
{
	int i, a, b, c, d, e, f, x, y, n = 0;

	for (i = 000000; i <= 999999; i++)
	{
		a = i / 100000;
		b = i / 10000 - a * 10;
		c = i / 1000 - a * 100 - b * 10;
		d = i / 100 - a * 1000 - b * 100 - c * 10;
		e = i / 10 - a * 10000 - b * 1000 - c * 100 - d * 10;
		f = i - a * 100000 - b * 10000 - c * 1000 - d * 100 - e * 10;

		x = a + b + c;
		y = d + e + f;

		if (x == y)
		{
			//cout«i«"\t"; //комментируем, ибо незачем видеть промежуточные количества
			++n;
		}
	}
	setlocale(LC_ALL, "Russian");
	cout << "Количество счастливых билетов: " << n << endl;
	system("pause");
	return 0;
}

